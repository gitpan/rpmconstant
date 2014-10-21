/* Nanar <nanardon@mandrake.org>
 * $Id: constant.c 33 2005-10-04 04:04:45Z nanardon $
 */

#include <stdio.h>
#include <string.h>
#include "rpmconstant.h"
#include <popt.h>



int main(int argc, const char *argv[]) {
    char * context =NULL;
    char c;
    const char * name;
    int val = 0;
    int token;
    long qmode = 0;
    int showprefix;
    
    poptContext optcon;

#define QMODE_LIST (1 << 0)
#define QMODE_SET (1 << 1)
#define QMODE_REVERSE (1 << 2)
#define QMODE_SHOWPREFIX (1 << 3)
    
    struct poptOption optionstable[] = {
        { "context", 'c', POPT_ARG_STRING, &context, 1, "Set context of search", "Context" },
        { "list-context", 'l', POPT_BIT_SET, &qmode, QMODE_LIST, "list available table", "List" },
        { "set", 's', POPT_BIT_SET, &qmode, QMODE_SET, "Show the value for all flag", NULL },
        { "reverse", 'r', POPT_BIT_SET, &qmode, QMODE_REVERSE, "Make a reverse query", "Reverse" },
        { "prefix", 'p', POPT_BIT_SET, &qmode, QMODE_SHOWPREFIX, "Show prefix on constant", "Prefix" }, 
        POPT_AUTOHELP
        POPT_TABLEEND
    };

    optcon = poptGetContext(NULL, argc, argv, optionstable, 0);
    
    while ((c = poptGetNextOpt(optcon)) >= 0) {}

    if (!(qmode & QMODE_LIST) && poptPeekArg(optcon) == NULL) {
        poptPrintUsage(optcon, stderr, 0);
        exit(1);
    }

    if (qmode & QMODE_SHOWPREFIX)
        showprefix = PREFIXED_YES;
    else
        showprefix = PREFIXED_NO;

    if (qmode & QMODE_LIST) {
        rpmconst consti = rpmconstNew();
        if (context) {
            if (rpmconstInitToContext(consti, context)) {
                while (rpmconstNextC(consti)) {
                    printf("%s: %d\n", rpmconstName(consti, showprefix), rpmconstValue(consti));
                }
            } else {
                printf("context '%s' not found\n", context);
            }
        } else {
            while (rpmconstNextL(consti)) {
                printf("%s\n", rpmconstContext(consti));
            }
        }
        consti = rpmconstFree(consti);
        return 0;
    }
    while ((name = poptGetArg(optcon)) != NULL) {
        if (qmode & QMODE_REVERSE) {
            if(sscanf(name, "%d", &token)) {
                if (qmode & QMODE_SET) {
                    printf("%d:", token);
                    int i = 0;
                    while ((val = rpmconstantFindMask(context, token, (void *) &name, showprefix))) {
                        printf(" %s", name);
                        token &= ~val;
                        if (++i > 20) return 0; 
                    }
                    printf("\n");
                } else {
                    if (rpmconstantFindValue(context, token, (void *) &name, showprefix))
                        printf("%d: %s\n", token, name);
                    else
                        printf("%d: Not found\n", token);
                }
            } else {
                printf("%s is not a integer value\n", name);
            }
        } else if(context) {
            if (rpmconstantFindName(context, name, &val, 0)) {
                if (~qmode & QMODE_SET) {
                    printf("%s: %d\n", name, val);
                    val = 0; /* resetting */
                }
            } else
                printf("%s: Not found\n", name);
        } else {
            poptPrintUsage(optcon, stderr, 0);
            exit(1);
        }
    }
    if (qmode & QMODE_SET && !(qmode & QMODE_REVERSE))
        printf("Value: %d\n", val);
    poptFreeContext(optcon);
    return 0;
}
