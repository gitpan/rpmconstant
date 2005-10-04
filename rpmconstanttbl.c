/* File automatically generate by ./rpmh2tbl
 * Olivier Thauvin <thauvin at aerov.jussieu.fr>
 * Parsed files:
 * /usr/include/rpm/argv.h
 * /usr/include/rpm/db.h
 * /usr/include/rpm/fts.h
 * /usr/include/rpm/hdrinline.h
 * /usr/include/rpm/header.h
 * /usr/include/rpm/misc.h
 * /usr/include/rpm/rpmal.h
 * /usr/include/rpm/rpmbuild.h
 * /usr/include/rpm/rpmcli.h
 * /usr/include/rpm/rpmdav.h
 * /usr/include/rpm/rpmdb.h
 * /usr/include/rpm/rpmds.h
 * /usr/include/rpm/rpmerr.h
 * /usr/include/rpm/rpmfc.h
 * /usr/include/rpm/rpmfi.h
 * /usr/include/rpm/rpmfile.h
 * /usr/include/rpm/rpmgi.h
 * /usr/include/rpm/rpmhash.h
 * /usr/include/rpm/rpmio.h
 * /usr/include/rpm/rpmlib.h
 * /usr/include/rpm/rpmlog.h
 * /usr/include/rpm/rpmmacro.h
 * /usr/include/rpm/rpmmessages.h
 * /usr/include/rpm/rpmpgp.h
 * /usr/include/rpm/rpmps.h
 * /usr/include/rpm/rpmspec.h
 * /usr/include/rpm/rpmsq.h
 * /usr/include/rpm/rpmsw.h
 * /usr/include/rpm/rpmsx.h
 * /usr/include/rpm/rpmte.h
 * /usr/include/rpm/rpmts.h
 * /usr/include/rpm/rpmurl.h
 * /usr/include/rpm/stringbuf.h
 * /usr/include/rpm/ugid.h
 */

#define RPMCONSTANT_INTERNAL
#include "rpmconstant.h"
 

/* From header.h
 * prefix tag: 
 * table: hMagic */
static const struct rpmconstant_s hMagicctbl[] = {
#ifdef H_HEADER
	{ "HEADER_MAGIC_NO", HEADER_MAGIC_NO }, 
	{ "HEADER_MAGIC_YES", HEADER_MAGIC_YES }, 
#endif /* H_HEADER */
	{ NULL, 0 } /* NULL terminated (hMagic) */
};
const struct rpmconstant_s * hMagicctable = hMagicctbl;


/* From header.h
 * prefix tag: RPM_
 * table: rpmTagType */
static const struct rpmconstant_s rpmTagTypectbl[] = {
#ifdef H_HEADER
	{ "RPM_MIN", RPM_MIN_TYPE }, 
	{ "RPM_NULL", RPM_NULL_TYPE }, 
	{ "RPM_CHAR", RPM_CHAR_TYPE }, 
	{ "RPM_INT8", RPM_INT8_TYPE }, 
	{ "RPM_INT16", RPM_INT16_TYPE }, 
	{ "RPM_INT32", RPM_INT32_TYPE }, 
	{ "RPM_STRING", RPM_STRING_TYPE }, 
	{ "RPM_BIN", RPM_BIN_TYPE }, 
	{ "RPM_STRING_ARRAY", RPM_STRING_ARRAY_TYPE }, 
	{ "RPM_I18NSTRING", RPM_I18NSTRING_TYPE }, 
	{ "RPM_MAX", RPM_MAX_TYPE }, 
	{ "RPM_REGION", RPM_REGION_TYPE }, 
	{ "RPM_BIN_ARRAY", RPM_BIN_ARRAY_TYPE }, 
	{ "RPM_XREF", RPM_XREF_TYPE }, 
#endif /* H_HEADER */
	{ NULL, 0 } /* NULL terminated (rpmTagType) */
};
const struct rpmconstant_s * rpmTagTypectable = rpmTagTypectbl;


/* From rpmbuild.h
 * prefix tag: RPMBUILD_
 * table: rpmBuildFlags */
static const struct rpmconstant_s rpmBuildFlagsctbl[] = {
#ifdef _H_RPMBUILD_
	{ "RPMBUILD_NONE", RPMBUILD_NONE }, 
	{ "RPMBUILD_PREP", RPMBUILD_PREP }, 
	{ "RPMBUILD_BUILD", RPMBUILD_BUILD }, 
	{ "RPMBUILD_INSTALL", RPMBUILD_INSTALL }, 
	{ "RPMBUILD_CHECK", RPMBUILD_CHECK }, 
	{ "RPMBUILD_CLEAN", RPMBUILD_CLEAN }, 
	{ "RPMBUILD_FILECHECK", RPMBUILD_FILECHECK }, 
	{ "RPMBUILD_PACKAGESOURCE", RPMBUILD_PACKAGESOURCE }, 
	{ "RPMBUILD_PACKAGEBINARY", RPMBUILD_PACKAGEBINARY }, 
	{ "RPMBUILD_RMSOURCE", RPMBUILD_RMSOURCE }, 
	{ "RPMBUILD_RMBUILD", RPMBUILD_RMBUILD }, 
	{ "RPMBUILD_STRINGBUF", RPMBUILD_STRINGBUF }, 
	{ "RPMBUILD_RMSPEC", RPMBUILD_RMSPEC }, 
#endif /* _H_RPMBUILD_ */
	{ NULL, 0 } /* NULL terminated (rpmBuildFlags) */
};
const struct rpmconstant_s * rpmBuildFlagsctable = rpmBuildFlagsctbl;


/* From rpmbuild.h
 * prefix tag: PART_
 * table: rpmParseState */
static const struct rpmconstant_s rpmParseStatectbl[] = {
#ifdef _H_RPMBUILD_
	{ "PART_SUBNAME", PART_SUBNAME }, 
	{ "PART_NAME", PART_NAME }, 
	{ "PART_NONE", PART_NONE }, /*!< */
	{ "PART_PREAMBLE", PART_PREAMBLE }, /*!< */
	{ "PART_PREP", PART_PREP }, /*!< */
	{ "PART_BUILD", PART_BUILD }, /*!< */
	{ "PART_INSTALL", PART_INSTALL }, /*!< */
	{ "PART_CHECK", PART_CHECK }, /*!< */
	{ "PART_CLEAN", PART_CLEAN }, /*!< */
	{ "PART_FILES", PART_FILES }, /*!< */
	{ "PART_PRE", PART_PRE }, /*!< */
	{ "PART_POST", PART_POST }, /*!< */
	{ "PART_PREUN", PART_PREUN }, /*!< */
	{ "PART_POSTUN", PART_POSTUN }, /*!< */
	{ "PART_PRETRANS", PART_PRETRANS }, /*!< */
	{ "PART_POSTTRANS", PART_POSTTRANS }, /*!< */
	{ "PART_DESCRIPTION", PART_DESCRIPTION }, /*!< */
	{ "PART_CHANGELOG", PART_CHANGELOG }, /*!< */
	{ "PART_TRIGGERIN", PART_TRIGGERIN }, /*!< */
	{ "PART_TRIGGERUN", PART_TRIGGERUN }, /*!< */
	{ "PART_VERIFYSCRIPT", PART_VERIFYSCRIPT }, /*!< */
	{ "PART_BUILDARCHITECTURES", PART_BUILDARCHITECTURES }, /*!< */
	{ "PART_TRIGGERPOSTUN", PART_TRIGGERPOSTUN }, /*!< */
	{ "PART_LAST", PART_LAST }, /*!< */
#endif /* _H_RPMBUILD_ */
	{ NULL, 0 } /* NULL terminated (rpmParseState) */
};
const struct rpmconstant_s * rpmParseStatectable = rpmParseStatectbl;


/* From rpmcli.h
 * prefix tag: VERIFY_
 * table: rpmVerifyFlags */
static const struct rpmconstant_s rpmVerifyFlagsctbl[] = {
#ifdef H_RPMCLI
	{ "VERIFY_DEFAULT", VERIFY_DEFAULT }, /*!< */
	{ "VERIFY_MD5", VERIFY_MD5 }, 
	{ "VERIFY_SIZE", VERIFY_SIZE }, 
	{ "VERIFY_LINKTO", VERIFY_LINKTO }, 
	{ "VERIFY_USER", VERIFY_USER }, 
	{ "VERIFY_GROUP", VERIFY_GROUP }, 
	{ "VERIFY_MTIME", VERIFY_MTIME }, 
	{ "VERIFY_MODE", VERIFY_MODE }, 
	{ "VERIFY_RDEV", VERIFY_RDEV }, 
	{ "VERIFY_CONTEXTS", VERIFY_CONTEXTS }, 
	{ "VERIFY_FILES", VERIFY_FILES }, 
	{ "VERIFY_DEPS", VERIFY_DEPS }, 
	{ "VERIFY_SCRIPT", VERIFY_SCRIPT }, 
	{ "VERIFY_DIGEST", VERIFY_DIGEST }, 
	{ "VERIFY_SIGNATURE", VERIFY_SIGNATURE }, 
	{ "VERIFY_PATCHES", VERIFY_PATCHES }, 
	{ "VERIFY_HDRCHK", VERIFY_HDRCHK }, 
	{ "VERIFY_FOR_LIST", VERIFY_FOR_LIST }, 
	{ "VERIFY_FOR_STATE", VERIFY_FOR_STATE }, 
	{ "VERIFY_FOR_DOCS", VERIFY_FOR_DOCS }, 
	{ "VERIFY_FOR_CONFIG", VERIFY_FOR_CONFIG }, 
	{ "VERIFY_FOR_DUMPFILES", VERIFY_FOR_DUMPFILES }, 
	{ "VERIFY_ATTRS", VERIFY_ATTRS }, 
	{ "VERIFY_ALL", VERIFY_ALL }, 
#endif /* H_RPMCLI */
	{ NULL, 0 } /* NULL terminated (rpmVerifyFlags) */
};
const struct rpmconstant_s * rpmVerifyFlagsctable = rpmVerifyFlagsctbl;


/* From rpmcli.h
 * prefix tag: RPMSIGN_
 * table: rpmSignFlags */
static const struct rpmconstant_s rpmSignFlagsctbl[] = {
#ifdef H_RPMCLI
	{ "RPMSIGN_NONE", RPMSIGN_NONE }, 
	{ "RPMSIGN_CHK_SIGNATURE", RPMSIGN_CHK_SIGNATURE }, /*!< from --checksig */
	{ "RPMSIGN_NEW_SIGNATURE", RPMSIGN_NEW_SIGNATURE }, /*!< from --resign */
	{ "RPMSIGN_ADD_SIGNATURE", RPMSIGN_ADD_SIGNATURE }, /*!< from --addsign */
	{ "RPMSIGN_DEL_SIGNATURE", RPMSIGN_DEL_SIGNATURE }, /*!< from --delsign */
	{ "RPMSIGN_IMPORT_PUBKEY", RPMSIGN_IMPORT_PUBKEY }, /*!< from --import */
#endif /* H_RPMCLI */
	{ NULL, 0 } /* NULL terminated (rpmSignFlags) */
};
const struct rpmconstant_s * rpmSignFlagsctable = rpmSignFlagsctbl;


/* From rpmdb.h
 * prefix tag: RPMMIRE_
 * table: rpmMireMode */
static const struct rpmconstant_s rpmMireModectbl[] = {
#ifdef H_RPMDB
	{ "RPMMIRE_DEFAULT", RPMMIRE_DEFAULT }, /*!< regex with \., .* and ^...$ added */
	{ "RPMMIRE_STRCMP", RPMMIRE_STRCMP }, /*!< strings  using strcmp(3) */
	{ "RPMMIRE_REGEX", RPMMIRE_REGEX }, /*!< regex(7) patterns through regcomp(3) */
	{ "RPMMIRE_GLOB", RPMMIRE_GLOB }, /*!< glob(7) patterns through fnmatch(3) */
#endif /* H_RPMDB */
	{ NULL, 0 } /* NULL terminated (rpmMireMode) */
};
const struct rpmconstant_s * rpmMireModectable = rpmMireModectbl;


/* From rpmerr.h
 * prefix tag: RPMERR_
 * table: rpmerrCode */
static const struct rpmconstant_s rpmerrCodectbl[] = {
#ifdef H_RPMERR
	{ "RPMERR_GDBMOPEN", RPMERR_GDBMOPEN }, 
	{ "RPMERR_GDBMREAD", RPMERR_GDBMREAD }, 
	{ "RPMERR_GDBMWRITE", RPMERR_GDBMWRITE }, 
	{ "RPMERR_INTERNAL", RPMERR_INTERNAL }, 
	{ "RPMERR_DBCORRUPT", RPMERR_DBCORRUPT }, 
	{ "RPMERR_OLDDBCORRUPT", RPMERR_OLDDBCORRUPT }, 
	{ "RPMERR_OLDDBMISSING", RPMERR_OLDDBMISSING }, 
	{ "RPMERR_NOCREATEDB", RPMERR_NOCREATEDB }, 
	{ "RPMERR_DBOPEN", RPMERR_DBOPEN }, 
	{ "RPMERR_DBGETINDEX", RPMERR_DBGETINDEX }, 
	{ "RPMERR_DBPUTINDEX", RPMERR_DBPUTINDEX }, 
	{ "RPMERR_NEWPACKAGE", RPMERR_NEWPACKAGE }, 
	{ "RPMERR_BADMAGIC", RPMERR_BADMAGIC }, 
	{ "RPMERR_RENAME", RPMERR_RENAME }, 
	{ "RPMERR_UNLINK", RPMERR_UNLINK }, 
	{ "RPMERR_RMDIR", RPMERR_RMDIR }, 
	{ "RPMERR_PKGINSTALLED", RPMERR_PKGINSTALLED }, 
	{ "RPMERR_CHOWN", RPMERR_CHOWN }, 
	{ "RPMERR_NOUSER", RPMERR_NOUSER }, 
	{ "RPMERR_NOGROUP", RPMERR_NOGROUP }, 
	{ "RPMERR_MKDIR", RPMERR_MKDIR }, 
	{ "RPMERR_FILECONFLICT", RPMERR_FILECONFLICT }, 
	{ "RPMERR_RPMRC", RPMERR_RPMRC }, 
	{ "RPMERR_NOSPEC", RPMERR_NOSPEC }, 
	{ "RPMERR_NOTSRPM", RPMERR_NOTSRPM }, 
	{ "RPMERR_FLOCK", RPMERR_FLOCK }, 
	{ "RPMERR_OLDPACKAGE", RPMERR_OLDPACKAGE }, 
	{ "RPMERR_CREATE", RPMERR_CREATE }, 
	{ "RPMERR_NOSPACE", RPMERR_NOSPACE }, 
	{ "RPMERR_NORELOCATE", RPMERR_NORELOCATE }, 
	{ "RPMERR_MTAB", RPMERR_MTAB }, 
	{ "RPMERR_STAT", RPMERR_STAT }, 
	{ "RPMERR_BADDEV", RPMERR_BADDEV }, 
	{ "RPMERR_BADRELOCATE", RPMERR_BADRELOCATE }, 
	{ "RPMERR_OLDDB", RPMERR_OLDDB }, 
	{ "RPMERR_UNMATCHEDIF", RPMERR_UNMATCHEDIF }, 
	{ "RPMERR_RELOAD", RPMERR_RELOAD }, 
	{ "RPMERR_BADARG", RPMERR_BADARG }, 
	{ "RPMERR_SCRIPT", RPMERR_SCRIPT }, 
	{ "RPMERR_READ", RPMERR_READ }, 
	{ "RPMERR_UNKNOWNOS", RPMERR_UNKNOWNOS }, 
	{ "RPMERR_UNKNOWNARCH", RPMERR_UNKNOWNARCH }, 
	{ "RPMERR_EXEC", RPMERR_EXEC }, 
	{ "RPMERR_FORK", RPMERR_FORK }, 
	{ "RPMERR_CPIO", RPMERR_CPIO }, 
	{ "RPMERR_GZIP", RPMERR_GZIP }, 
	{ "RPMERR_BADSPEC", RPMERR_BADSPEC }, 
	{ "RPMERR_LDD", RPMERR_LDD }, 
	{ "RPMERR_BADFILENAME", RPMERR_BADFILENAME }, 
	{ "RPMERR_OPEN", RPMERR_OPEN }, 
	{ "RPMERR_POPEN", RPMERR_POPEN }, 
	{ "RPMERR_NOTREG", RPMERR_NOTREG }, 
	{ "RPMERR_QUERY", RPMERR_QUERY }, 
	{ "RPMERR_QFMT", RPMERR_QFMT }, 
	{ "RPMERR_DBCONFIG", RPMERR_DBCONFIG }, 
	{ "RPMERR_DBERR", RPMERR_DBERR }, 
	{ "RPMERR_BADPACKAGE", RPMERR_BADPACKAGE }, 
	{ "RPMERR_FREELIST", RPMERR_FREELIST }, 
	{ "RPMERR_DATATYPE", RPMERR_DATATYPE }, 
	{ "RPMERR_BUILDROOT", RPMERR_BUILDROOT }, 
	{ "RPMERR_MAKETEMP", RPMERR_MAKETEMP }, 
	{ "RPMERR_FWRITE", RPMERR_FWRITE }, 
	{ "RPMERR_FREAD", RPMERR_FREAD }, 
	{ "RPMERR_READLEAD", RPMERR_READLEAD }, 
	{ "RPMERR_WRITELEAD", RPMERR_WRITELEAD }, 
	{ "RPMERR_QUERYINFO", RPMERR_QUERYINFO }, 
	{ "RPMERR_MANIFEST", RPMERR_MANIFEST }, 
	{ "RPMERR_BADHEADER", RPMERR_BADHEADER }, 
	{ "RPMERR_FSEEK", RPMERR_FSEEK }, 
	{ "RPMERR_REGCOMP", RPMERR_REGCOMP }, 
	{ "RPMERR_REGEXEC", RPMERR_REGEXEC }, 
	{ "RPMERR_BADSIGTYPE", RPMERR_BADSIGTYPE }, 
	{ "RPMERR_SIGGEN", RPMERR_SIGGEN }, 
	{ "RPMERR_SIGVFY", RPMERR_SIGVFY }, 
	{ "RPMERR_IMPORT", RPMERR_IMPORT }, 
#endif /* H_RPMERR */
	{ NULL, 0 } /* NULL terminated (rpmerrCode) */
};
const struct rpmconstant_s * rpmerrCodectable = rpmerrCodectbl;


/* From rpmlib.h
 * prefix tag: UNINSTALL_
 * table: rpmEraseInterfaceFlags */
static const struct rpmconstant_s rpmEraseInterfaceFlagsctbl[] = {
#ifdef H_RPMLIB
	{ "UNINSTALL_NONE", UNINSTALL_NONE }, 
	{ "UNINSTALL_NODEPS", UNINSTALL_NODEPS }, 
	{ "UNINSTALL_ALLMATCHES", UNINSTALL_ALLMATCHES }, 
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmEraseInterfaceFlags) */
};
const struct rpmconstant_s * rpmEraseInterfaceFlagsctable = rpmEraseInterfaceFlagsctbl;


/* From rpmlib.h
 * prefix tag: RPMTRANS_FLAG_
 * table: rpmtransFlags */
static const struct rpmconstant_s rpmtransFlagsctbl[] = {
#ifdef H_RPMLIB
	{ "RPMTRANS_FLAG_NONE", RPMTRANS_FLAG_NONE }, 
	{ "RPMTRANS_FLAG_TEST", RPMTRANS_FLAG_TEST }, 
	{ "RPMTRANS_FLAG_BUILD_PROBS", RPMTRANS_FLAG_BUILD_PROBS }, 
	{ "RPMTRANS_FLAG_NOSCRIPTS", RPMTRANS_FLAG_NOSCRIPTS }, 
	{ "RPMTRANS_FLAG_JUSTDB", RPMTRANS_FLAG_JUSTDB }, 
	{ "RPMTRANS_FLAG_NOTRIGGERS", RPMTRANS_FLAG_NOTRIGGERS }, 
	{ "RPMTRANS_FLAG_NODOCS", RPMTRANS_FLAG_NODOCS }, 
	{ "RPMTRANS_FLAG_ALLFILES", RPMTRANS_FLAG_ALLFILES }, 
	{ "RPMTRANS_FLAG_KEEPOBSOLETE", RPMTRANS_FLAG_KEEPOBSOLETE }, 
	{ "RPMTRANS_FLAG_NOCONTEXTS", RPMTRANS_FLAG_NOCONTEXTS }, 
	{ "RPMTRANS_FLAG_DIRSTASH", RPMTRANS_FLAG_DIRSTASH }, 
	{ "RPMTRANS_FLAG_REPACKAGE", RPMTRANS_FLAG_REPACKAGE }, 
	{ "RPMTRANS_FLAG_PKGCOMMIT", RPMTRANS_FLAG_PKGCOMMIT }, 
	{ "RPMTRANS_FLAG_PKGUNDO", RPMTRANS_FLAG_PKGUNDO }, 
	{ "RPMTRANS_FLAG_COMMIT", RPMTRANS_FLAG_COMMIT }, 
	{ "RPMTRANS_FLAG_UNDO", RPMTRANS_FLAG_UNDO }, 
	{ "RPMTRANS_FLAG_REVERSE", RPMTRANS_FLAG_REVERSE }, 
	{ "RPMTRANS_FLAG_NOTRIGGERPREIN", RPMTRANS_FLAG_NOTRIGGERPREIN }, 
	{ "RPMTRANS_FLAG_NOPRE", RPMTRANS_FLAG_NOPRE }, 
	{ "RPMTRANS_FLAG_NOPOST", RPMTRANS_FLAG_NOPOST }, 
	{ "RPMTRANS_FLAG_NOTRIGGERIN", RPMTRANS_FLAG_NOTRIGGERIN }, 
	{ "RPMTRANS_FLAG_NOTRIGGERUN", RPMTRANS_FLAG_NOTRIGGERUN }, 
	{ "RPMTRANS_FLAG_NOPREUN", RPMTRANS_FLAG_NOPREUN }, 
	{ "RPMTRANS_FLAG_NOPOSTUN", RPMTRANS_FLAG_NOPOSTUN }, 
	{ "RPMTRANS_FLAG_NOTRIGGERPOSTUN", RPMTRANS_FLAG_NOTRIGGERPOSTUN }, 
	{ "RPMTRANS_FLAG_NOPAYLOAD", RPMTRANS_FLAG_NOPAYLOAD }, 
	{ "RPMTRANS_FLAG_APPLYONLY", RPMTRANS_FLAG_APPLYONLY }, 
	{ "RPMTRANS_FLAG_ANACONDA", RPMTRANS_FLAG_ANACONDA }, 
	{ "RPMTRANS_FLAG_NOMD5", RPMTRANS_FLAG_NOMD5 }, 
	{ "RPMTRANS_FLAG_NOSUGGEST", RPMTRANS_FLAG_NOSUGGEST }, 
	{ "RPMTRANS_FLAG_ADDINDEPS", RPMTRANS_FLAG_ADDINDEPS }, 
	{ "RPMTRANS_FLAG_NOCONFIGS", RPMTRANS_FLAG_NOCONFIGS }, 
	{ "RPMTRANS_FLAG_DEPLOOPS", RPMTRANS_FLAG_DEPLOOPS }, 
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmtransFlags) */
};
const struct rpmconstant_s * rpmtransFlagsctable = rpmtransFlagsctbl;


/* From rpmlib.h
 * prefix tag: RPM_MACHTABLE_
 * table: rpm_machtable */
static const struct rpmconstant_s rpm_machtablectbl[] = {
#ifdef H_RPMLIB
	{ "RPM_MACHTABLE_INSTARCH", RPM_MACHTABLE_INSTARCH }, /*!< Install platform architecture. */
	{ "RPM_MACHTABLE_INSTOS", RPM_MACHTABLE_INSTOS }, /*!< Install platform operating system. */
	{ "RPM_MACHTABLE_BUILDARCH", RPM_MACHTABLE_BUILDARCH }, /*!< Build platform architecture. */
	{ "RPM_MACHTABLE_BUILDOS", RPM_MACHTABLE_BUILDOS }, /*!< Build platform operating system. */
	{ "RPM_MACHTABLE_COUNT", RPM_MACHTABLE_COUNT }, /*!< No. of arch/os tables. */
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpm_machtable) */
};
const struct rpmconstant_s * rpm_machtablectable = rpm_machtablectbl;


/* From rpmlib.h
 * prefix tag: FA_
 * table: fileAction */
static const struct rpmconstant_s fileActionctbl[] = {
#ifdef H_RPMLIB
	{ "FA_UNKNOWN", FA_UNKNOWN }, /*!< initial action for file ... */
	{ "FA_CREATE", FA_CREATE }, /*!< ... copy in from payload. */
	{ "FA_COPYIN", FA_COPYIN }, /*!< ... copy in from payload. */
	{ "FA_COPYOUT", FA_COPYOUT }, /*!< ... copy out to payload. */
	{ "FA_BACKUP", FA_BACKUP }, /*!< ... renamed with ".rpmorig" extension. */
	{ "FA_SAVE", FA_SAVE }, /*!< ... renamed with ".rpmsave" extension. */
	{ "FA_SKIP", FA_SKIP }, /*!< ... already replaced, don't remove. */
	{ "FA_ALTNAME", FA_ALTNAME }, /*!< ... create with ".rpmnew" extension. */
	{ "FA_ERASE", FA_ERASE }, /*!< ... to be removed. */
	{ "FA_SKIPNSTATE", FA_SKIPNSTATE }, /*!< ... untouched, state "not installed". */
	{ "FA_SKIPNETSHARED", FA_SKIPNETSHARED }, /*!< ... untouched, state "netshared". */
	{ "FA_SKIPCOLOR", FA_SKIPCOLOR }, /*!< ... untouched, state "wrong color". */
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (fileAction) */
};
const struct rpmconstant_s * fileActionctable = fileActionctbl;


/* From rpmlib.h
 * prefix tag: RPMFILE_
 * table: rpmfileState */
static const struct rpmconstant_s rpmfileStatectbl[] = {
#ifdef H_RPMLIB
	{ "RPMFILE_STATE_NORMAL", RPMFILE_STATE_NORMAL }, 
	{ "RPMFILE_STATE_REPLACED", RPMFILE_STATE_REPLACED }, 
	{ "RPMFILE_STATE_NOTINSTALLED", RPMFILE_STATE_NOTINSTALLED }, 
	{ "RPMFILE_STATE_NETSHARED", RPMFILE_STATE_NETSHARED }, 
	{ "RPMFILE_STATE_WRONGCOLOR", RPMFILE_STATE_WRONGCOLOR }, 
	{ "RPMFILE_STATE_MISSING", RPMFILE_STATE_MISSING }, /* XXX used for unavailable data */
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmfileState) */
};
const struct rpmconstant_s * rpmfileStatectable = rpmfileStatectbl;


/* From rpmlib.h
 * prefix tag: RPMPROB_FILTER_
 * table: rpmprobFilterFlags */
static const struct rpmconstant_s rpmprobFilterFlagsctbl[] = {
#ifdef H_RPMLIB
	{ "RPMPROB_FILTER_NONE", RPMPROB_FILTER_NONE }, 
	{ "RPMPROB_FILTER_IGNOREOS", RPMPROB_FILTER_IGNOREOS }, 
	{ "RPMPROB_FILTER_IGNOREARCH", RPMPROB_FILTER_IGNOREARCH }, 
	{ "RPMPROB_FILTER_REPLACEPKG", RPMPROB_FILTER_REPLACEPKG }, 
	{ "RPMPROB_FILTER_FORCERELOCATE", RPMPROB_FILTER_FORCERELOCATE }, 
	{ "RPMPROB_FILTER_REPLACENEWFILES", RPMPROB_FILTER_REPLACENEWFILES }, 
	{ "RPMPROB_FILTER_REPLACEOLDFILES", RPMPROB_FILTER_REPLACEOLDFILES }, 
	{ "RPMPROB_FILTER_OLDPACKAGE", RPMPROB_FILTER_OLDPACKAGE }, 
	{ "RPMPROB_FILTER_DISKSPACE", RPMPROB_FILTER_DISKSPACE }, 
	{ "RPMPROB_FILTER_DISKNODES", RPMPROB_FILTER_DISKNODES }, 
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmprobFilterFlags) */
};
const struct rpmconstant_s * rpmprobFilterFlagsctable = rpmprobFilterFlagsctbl;


/* From rpmlib.h
 * prefix tag: RPMSIGTAG_
 * table: rpmtagSignature */
static const struct rpmconstant_s rpmtagSignaturectbl[] = {
#ifdef H_RPMLIB
	{ "RPMSIGTAG_SIZE", RPMSIGTAG_SIZE }, /*!< internal Header+Payload size in bytes. */
	{ "RPMSIGTAG_LEMD5_1", RPMSIGTAG_LEMD5_1 }, /*!< internal Broken MD5, take 1 @deprecated legacy. */
	{ "RPMSIGTAG_PGP", RPMSIGTAG_PGP }, /*!< internal PGP 2.6.3 signature. */
	{ "RPMSIGTAG_LEMD5_2", RPMSIGTAG_LEMD5_2 }, /*!< internal Broken MD5, take 2 @deprecated legacy. */
	{ "RPMSIGTAG_MD5", RPMSIGTAG_MD5 }, /*!< internal MD5 signature. */
	{ "RPMSIGTAG_GPG", RPMSIGTAG_GPG }, /*!< internal GnuPG signature. */
	{ "RPMSIGTAG_PGP5", RPMSIGTAG_PGP5 }, /*!< internal PGP5 signature @deprecated legacy. */
	{ "RPMSIGTAG_PAYLOADSIZE", RPMSIGTAG_PAYLOADSIZE }, /*!< internal uncompressed payload size in bytes. */
	{ "RPMSIGTAG_BADSHA1_1", RPMSIGTAG_BADSHA1_1 }, /*!< internal Broken SHA1, take 1. */
	{ "RPMSIGTAG_BADSHA1_2", RPMSIGTAG_BADSHA1_2 }, /*!< internal Broken SHA1, take 2. */
	{ "RPMSIGTAG_SHA1", RPMSIGTAG_SHA1 }, /*!< internal sha1 header digest. */
	{ "RPMSIGTAG_DSA", RPMSIGTAG_DSA }, /*!< internal DSA header signature. */
	{ "RPMSIGTAG_RSA", RPMSIGTAG_RSA }, /*!< internal RSA header signature. */
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmtagSignature) */
};
const struct rpmconstant_s * rpmtagSignaturectable = rpmtagSignaturectbl;


/* From rpmlib.h
 * prefix tag: RPMTAG_
 * table: rpmTag */
static const struct rpmconstant_s rpmTagctbl[] = {
#ifdef H_RPMLIB
	{ "RPMTAG_HEADERIMAGE", RPMTAG_HEADERIMAGE }, /*!< Current image. */
	{ "RPMTAG_HEADERSIGNATURES", RPMTAG_HEADERSIGNATURES }, /*!< Signatures. */
	{ "RPMTAG_HEADERIMMUTABLE", RPMTAG_HEADERIMMUTABLE }, /*!< Original image. */
	{ "RPMTAG_HEADERREGIONS", RPMTAG_HEADERREGIONS }, /*!< Regions. */
	{ "RPMTAG_HEADERI18NTABLE", RPMTAG_HEADERI18NTABLE }, /*!< I18N string locales. */
	{ "RPMTAG_SIG_BASE", RPMTAG_SIG_BASE }, 
	{ "RPMTAG_SIGSIZE", RPMTAG_SIGSIZE }, /* i */
	{ "RPMTAG_SIGLEMD5_1", RPMTAG_SIGLEMD5_1 }, /*!< internal - obsolete */
	{ "RPMTAG_SIGPGP", RPMTAG_SIGPGP }, /* x */
	{ "RPMTAG_SIGLEMD5_2", RPMTAG_SIGLEMD5_2 }, /*!< internal - obsolete */
	{ "RPMTAG_SIGMD5", RPMTAG_SIGMD5 }, /* x */
	{ "RPMTAG_PKGID", RPMTAG_PKGID }, /* x */
	{ "RPMTAG_SIGGPG", RPMTAG_SIGGPG }, /* x */
	{ "RPMTAG_SIGPGP5", RPMTAG_SIGPGP5 }, /*!< internal - obsolete */
	{ "RPMTAG_BADSHA1_1", RPMTAG_BADSHA1_1 }, /*!< internal - obsolete */
	{ "RPMTAG_BADSHA1_2", RPMTAG_BADSHA1_2 }, /*!< internal - obsolete */
	{ "RPMTAG_PUBKEYS", RPMTAG_PUBKEYS }, /* s[] */
	{ "RPMTAG_DSAHEADER", RPMTAG_DSAHEADER }, /* x */
	{ "RPMTAG_RSAHEADER", RPMTAG_RSAHEADER }, /* x */
	{ "RPMTAG_SHA1HEADER", RPMTAG_SHA1HEADER }, /* s */
	{ "RPMTAG_HDRID", RPMTAG_HDRID }, /* s */
	{ "RPMTAG_NAME", RPMTAG_NAME }, /* s */
	{ "RPMTAG_N", RPMTAG_N }, /* s */
	{ "RPMTAG_VERSION", RPMTAG_VERSION }, /* s */
	{ "RPMTAG_V", RPMTAG_V }, /* s */
	{ "RPMTAG_RELEASE", RPMTAG_RELEASE }, /* s */
	{ "RPMTAG_R", RPMTAG_R }, /* s */
	{ "RPMTAG_EPOCH", RPMTAG_EPOCH }, /* i */
	{ "RPMTAG_E", RPMTAG_E }, /* i */
	{ "RPMTAG_SERIAL", RPMTAG_SERIAL }, /* i backward comaptibility */
	{ "RPMTAG_SUMMARY", RPMTAG_SUMMARY }, /* s{} */
	{ "RPMTAG_DESCRIPTION", RPMTAG_DESCRIPTION }, /* s{} */
	{ "RPMTAG_BUILDTIME", RPMTAG_BUILDTIME }, /* i */
	{ "RPMTAG_BUILDHOST", RPMTAG_BUILDHOST }, /* s */
	{ "RPMTAG_INSTALLTIME", RPMTAG_INSTALLTIME }, /* i */
	{ "RPMTAG_SIZE", RPMTAG_SIZE }, /* i */
	{ "RPMTAG_DISTRIBUTION", RPMTAG_DISTRIBUTION }, /* s */
	{ "RPMTAG_VENDOR", RPMTAG_VENDOR }, /* s */
	{ "RPMTAG_GIF", RPMTAG_GIF }, /* x */
	{ "RPMTAG_XPM", RPMTAG_XPM }, /* x */
	{ "RPMTAG_LICENSE", RPMTAG_LICENSE }, /* s */
	{ "RPMTAG_COPYRIGHT", RPMTAG_COPYRIGHT }, /* s backward comaptibility */
	{ "RPMTAG_PACKAGER", RPMTAG_PACKAGER }, /* s */
	{ "RPMTAG_GROUP", RPMTAG_GROUP }, /* s{} */
	{ "RPMTAG_CHANGELOG", RPMTAG_CHANGELOG }, /*!< s[] internal */
	{ "RPMTAG_SOURCE", RPMTAG_SOURCE }, /* s[] */
	{ "RPMTAG_PATCH", RPMTAG_PATCH }, /* s[] */
	{ "RPMTAG_URL", RPMTAG_URL }, /* s */
	{ "RPMTAG_OS", RPMTAG_OS }, /* s legacy used int */
	{ "RPMTAG_ARCH", RPMTAG_ARCH }, /* s legacy used int */
	{ "RPMTAG_PREIN", RPMTAG_PREIN }, /* s */
	{ "RPMTAG_POSTIN", RPMTAG_POSTIN }, /* s */
	{ "RPMTAG_PREUN", RPMTAG_PREUN }, /* s */
	{ "RPMTAG_POSTUN", RPMTAG_POSTUN }, /* s */
	{ "RPMTAG_OLDFILENAMES", RPMTAG_OLDFILENAMES }, /* s[] obsolete */
	{ "RPMTAG_FILESIZES", RPMTAG_FILESIZES }, /* i */
	{ "RPMTAG_FILESTATES", RPMTAG_FILESTATES }, /* c */
	{ "RPMTAG_FILEMODES", RPMTAG_FILEMODES }, /* h */
	{ "RPMTAG_FILEUIDS", RPMTAG_FILEUIDS }, /*!< internal */
	{ "RPMTAG_FILEGIDS", RPMTAG_FILEGIDS }, /*!< internal */
	{ "RPMTAG_FILERDEVS", RPMTAG_FILERDEVS }, /* h */
	{ "RPMTAG_FILEMTIMES", RPMTAG_FILEMTIMES }, /* i */
	{ "RPMTAG_FILEMD5S", RPMTAG_FILEMD5S }, /* s[] */
	{ "RPMTAG_FILELINKTOS", RPMTAG_FILELINKTOS }, /* s[] */
	{ "RPMTAG_FILEFLAGS", RPMTAG_FILEFLAGS }, /* i */
	{ "RPMTAG_ROOT", RPMTAG_ROOT }, /*!< internal - obsolete */
	{ "RPMTAG_FILEUSERNAME", RPMTAG_FILEUSERNAME }, /* s[] */
	{ "RPMTAG_FILEGROUPNAME", RPMTAG_FILEGROUPNAME }, /* s[] */
	{ "RPMTAG_EXCLUDE", RPMTAG_EXCLUDE }, /*!< internal - obsolete */
	{ "RPMTAG_EXCLUSIVE", RPMTAG_EXCLUSIVE }, /*!< internal - obsolete */
	{ "RPMTAG_ICON", RPMTAG_ICON }, 
	{ "RPMTAG_SOURCERPM", RPMTAG_SOURCERPM }, /* s */
	{ "RPMTAG_FILEVERIFYFLAGS", RPMTAG_FILEVERIFYFLAGS }, /* i */
	{ "RPMTAG_ARCHIVESIZE", RPMTAG_ARCHIVESIZE }, /* i */
	{ "RPMTAG_PROVIDENAME", RPMTAG_PROVIDENAME }, /* s[] */
	{ "RPMTAG_PROVIDES", RPMTAG_PROVIDES }, /* s[] */
	{ "RPMTAG_P", RPMTAG_P }, /* s[] */
	{ "RPMTAG_REQUIREFLAGS", RPMTAG_REQUIREFLAGS }, /* i */
	{ "RPMTAG_REQUIRENAME", RPMTAG_REQUIRENAME }, /* s[] */
	{ "RPMTAG_REQUIRES", RPMTAG_REQUIRES }, /* s[] */
	{ "RPMTAG_D", RPMTAG_D }, /* s[] */
	{ "RPMTAG_REQUIREVERSION", RPMTAG_REQUIREVERSION }, /* s[] */
	{ "RPMTAG_NOSOURCE", RPMTAG_NOSOURCE }, /*!< internal */
	{ "RPMTAG_NOPATCH", RPMTAG_NOPATCH }, /*!< internal */
	{ "RPMTAG_CONFLICTFLAGS", RPMTAG_CONFLICTFLAGS }, /* i */
	{ "RPMTAG_CONFLICTNAME", RPMTAG_CONFLICTNAME }, /* s[] */
	{ "RPMTAG_CONFLICTS", RPMTAG_CONFLICTS }, /* s[] */
	{ "RPMTAG_C", RPMTAG_C }, /* s[] */
	{ "RPMTAG_CONFLICTVERSION", RPMTAG_CONFLICTVERSION }, /* s[] */
	{ "RPMTAG_DEFAULTPREFIX", RPMTAG_DEFAULTPREFIX }, /*!< internal - deprecated */
	{ "RPMTAG_BUILDROOT", RPMTAG_BUILDROOT }, /*!< internal */
	{ "RPMTAG_INSTALLPREFIX", RPMTAG_INSTALLPREFIX }, /*!< internal - deprecated */
	{ "RPMTAG_EXCLUDEARCH", RPMTAG_EXCLUDEARCH }, 
	{ "RPMTAG_EXCLUDEOS", RPMTAG_EXCLUDEOS }, 
	{ "RPMTAG_EXCLUSIVEARCH", RPMTAG_EXCLUSIVEARCH }, 
	{ "RPMTAG_EXCLUSIVEOS", RPMTAG_EXCLUSIVEOS }, 
	{ "RPMTAG_AUTOREQPROV", RPMTAG_AUTOREQPROV }, /*!< internal */
	{ "RPMTAG_RPMVERSION", RPMTAG_RPMVERSION }, /* s */
	{ "RPMTAG_TRIGGERSCRIPTS", RPMTAG_TRIGGERSCRIPTS }, /* s[] */
	{ "RPMTAG_TRIGGERNAME", RPMTAG_TRIGGERNAME }, /* s[] */
	{ "RPMTAG_TRIGGERVERSION", RPMTAG_TRIGGERVERSION }, /* s[] */
	{ "RPMTAG_TRIGGERFLAGS", RPMTAG_TRIGGERFLAGS }, /* i */
	{ "RPMTAG_TRIGGERINDEX", RPMTAG_TRIGGERINDEX }, /* i */
	{ "RPMTAG_VERIFYSCRIPT", RPMTAG_VERIFYSCRIPT }, /* s */
	{ "RPMTAG_CHANGELOGTIME", RPMTAG_CHANGELOGTIME }, /* i */
	{ "RPMTAG_CHANGELOGNAME", RPMTAG_CHANGELOGNAME }, /* s[] */
	{ "RPMTAG_CHANGELOGTEXT", RPMTAG_CHANGELOGTEXT }, /* s[] */
	{ "RPMTAG_BROKENMD5", RPMTAG_BROKENMD5 }, /*!< internal - obsolete */
	{ "RPMTAG_PREREQ", RPMTAG_PREREQ }, /*!< internal */
	{ "RPMTAG_PREINPROG", RPMTAG_PREINPROG }, /* s */
	{ "RPMTAG_POSTINPROG", RPMTAG_POSTINPROG }, /* s */
	{ "RPMTAG_PREUNPROG", RPMTAG_PREUNPROG }, /* s */
	{ "RPMTAG_POSTUNPROG", RPMTAG_POSTUNPROG }, /* s */
	{ "RPMTAG_BUILDARCHS", RPMTAG_BUILDARCHS }, 
	{ "RPMTAG_OBSOLETENAME", RPMTAG_OBSOLETENAME }, /* s[] */
	{ "RPMTAG_OBSOLETES", RPMTAG_OBSOLETES }, /* s[] */
	{ "RPMTAG_O", RPMTAG_O }, /* s[] */
	{ "RPMTAG_VERIFYSCRIPTPROG", RPMTAG_VERIFYSCRIPTPROG }, /* s */
	{ "RPMTAG_TRIGGERSCRIPTPROG", RPMTAG_TRIGGERSCRIPTPROG }, /* s */
	{ "RPMTAG_DOCDIR", RPMTAG_DOCDIR }, /*!< internal */
	{ "RPMTAG_COOKIE", RPMTAG_COOKIE }, /* s */
	{ "RPMTAG_FILEDEVICES", RPMTAG_FILEDEVICES }, /* i */
	{ "RPMTAG_FILEINODES", RPMTAG_FILEINODES }, /* i */
	{ "RPMTAG_FILELANGS", RPMTAG_FILELANGS }, /* s[] */
	{ "RPMTAG_PREFIXES", RPMTAG_PREFIXES }, /* s[] */
	{ "RPMTAG_INSTPREFIXES", RPMTAG_INSTPREFIXES }, /* s[] */
	{ "RPMTAG_TRIGGERIN", RPMTAG_TRIGGERIN }, /*!< internal */
	{ "RPMTAG_TRIGGERUN", RPMTAG_TRIGGERUN }, /*!< internal */
	{ "RPMTAG_TRIGGERPOSTUN", RPMTAG_TRIGGERPOSTUN }, /*!< internal */
	{ "RPMTAG_AUTOREQ", RPMTAG_AUTOREQ }, /*!< internal */
	{ "RPMTAG_AUTOPROV", RPMTAG_AUTOPROV }, /*!< internal */
	{ "RPMTAG_CAPABILITY", RPMTAG_CAPABILITY }, /*!< internal - obsolete */
	{ "RPMTAG_SOURCEPACKAGE", RPMTAG_SOURCEPACKAGE }, /*!< i src.rpm header marker */
	{ "RPMTAG_OLDORIGFILENAMES", RPMTAG_OLDORIGFILENAMES }, /*!< internal - obsolete */
	{ "RPMTAG_BUILDPREREQ", RPMTAG_BUILDPREREQ }, /*!< internal */
	{ "RPMTAG_BUILDREQUIRES", RPMTAG_BUILDREQUIRES }, /*!< internal */
	{ "RPMTAG_BUILDCONFLICTS", RPMTAG_BUILDCONFLICTS }, /*!< internal */
	{ "RPMTAG_BUILDMACROS", RPMTAG_BUILDMACROS }, /*!< internal - unused */
	{ "RPMTAG_PROVIDEFLAGS", RPMTAG_PROVIDEFLAGS }, /* i */
	{ "RPMTAG_PROVIDEVERSION", RPMTAG_PROVIDEVERSION }, /* s[] */
	{ "RPMTAG_OBSOLETEFLAGS", RPMTAG_OBSOLETEFLAGS }, /* i */
	{ "RPMTAG_OBSOLETEVERSION", RPMTAG_OBSOLETEVERSION }, /* s[] */
	{ "RPMTAG_DIRINDEXES", RPMTAG_DIRINDEXES }, /* i */
	{ "RPMTAG_BASENAMES", RPMTAG_BASENAMES }, /* s[] */
	{ "RPMTAG_DIRNAMES", RPMTAG_DIRNAMES }, /* s[] */
	{ "RPMTAG_ORIGDIRINDEXES", RPMTAG_ORIGDIRINDEXES }, /*!< internal */
	{ "RPMTAG_ORIGBASENAMES", RPMTAG_ORIGBASENAMES }, /*!< internal */
	{ "RPMTAG_ORIGDIRNAMES", RPMTAG_ORIGDIRNAMES }, /*!< internal */
	{ "RPMTAG_OPTFLAGS", RPMTAG_OPTFLAGS }, /* s */
	{ "RPMTAG_DISTURL", RPMTAG_DISTURL }, /* s */
	{ "RPMTAG_PAYLOADFORMAT", RPMTAG_PAYLOADFORMAT }, /* s */
	{ "RPMTAG_PAYLOADCOMPRESSOR", RPMTAG_PAYLOADCOMPRESSOR }, /* s */
	{ "RPMTAG_PAYLOADFLAGS", RPMTAG_PAYLOADFLAGS }, /* s */
	{ "RPMTAG_INSTALLCOLOR", RPMTAG_INSTALLCOLOR }, /*!< i transaction color when installed */
	{ "RPMTAG_INSTALLTID", RPMTAG_INSTALLTID }, /* i */
	{ "RPMTAG_REMOVETID", RPMTAG_REMOVETID }, /* i */
	{ "RPMTAG_SHA1RHN", RPMTAG_SHA1RHN }, /*!< internal - obsolete */
	{ "RPMTAG_RHNPLATFORM", RPMTAG_RHNPLATFORM }, /* s */
	{ "RPMTAG_PLATFORM", RPMTAG_PLATFORM }, /* s */
	{ "RPMTAG_PATCHESNAME", RPMTAG_PATCHESNAME }, /*!< placeholder (SuSE) */
	{ "RPMTAG_PATCHESFLAGS", RPMTAG_PATCHESFLAGS }, /*!< placeholder (SuSE) */
	{ "RPMTAG_PATCHESVERSION", RPMTAG_PATCHESVERSION }, /*!< placeholder (SuSE) */
	{ "RPMTAG_CACHECTIME", RPMTAG_CACHECTIME }, /* i */
	{ "RPMTAG_CACHEPKGPATH", RPMTAG_CACHEPKGPATH }, /* s */
	{ "RPMTAG_CACHEPKGSIZE", RPMTAG_CACHEPKGSIZE }, /* i */
	{ "RPMTAG_CACHEPKGMTIME", RPMTAG_CACHEPKGMTIME }, /* i */
	{ "RPMTAG_FILECOLORS", RPMTAG_FILECOLORS }, /* i */
	{ "RPMTAG_FILECLASS", RPMTAG_FILECLASS }, /* i */
	{ "RPMTAG_CLASSDICT", RPMTAG_CLASSDICT }, /* s[] */
	{ "RPMTAG_FILEDEPENDSX", RPMTAG_FILEDEPENDSX }, /* i */
	{ "RPMTAG_FILEDEPENDSN", RPMTAG_FILEDEPENDSN }, /* i */
	{ "RPMTAG_DEPENDSDICT", RPMTAG_DEPENDSDICT }, /* i */
	{ "RPMTAG_SOURCEPKGID", RPMTAG_SOURCEPKGID }, /* x */
	{ "RPMTAG_FILECONTEXTS", RPMTAG_FILECONTEXTS }, /* s[] */
	{ "RPMTAG_FSCONTEXTS", RPMTAG_FSCONTEXTS }, /*!< s[] extension */
	{ "RPMTAG_RECONTEXTS", RPMTAG_RECONTEXTS }, /*!< s[] extension */
	{ "RPMTAG_POLICIES", RPMTAG_POLICIES }, /*!< s[] selinux *.te policy file. */
	{ "RPMTAG_PRETRANS", RPMTAG_PRETRANS }, /* s */
	{ "RPMTAG_POSTTRANS", RPMTAG_POSTTRANS }, /* s */
	{ "RPMTAG_PRETRANSPROG", RPMTAG_PRETRANSPROG }, /* s */
	{ "RPMTAG_POSTTRANSPROG", RPMTAG_POSTTRANSPROG }, /* s */
	{ "RPMTAG_DISTTAG", RPMTAG_DISTTAG }, /* s */
	{ "RPMTAG_SUGGESTSNAME", RPMTAG_SUGGESTSNAME }, /* s[] extension placeholder */
	{ "RPMTAG_SUGGESTSVERSION", RPMTAG_SUGGESTSVERSION }, /* s[] extension placeholder */
	{ "RPMTAG_SUGGESTSFLAGS", RPMTAG_SUGGESTSFLAGS }, /* i   extension placeholder */
	{ "RPMTAG_ENHANCESNAME", RPMTAG_ENHANCESNAME }, /* s[] extension placeholder */
	{ "RPMTAG_ENHANCESVERSION", RPMTAG_ENHANCESVERSION }, /* s[] extension placeholder */
	{ "RPMTAG_ENHANCESFLAGS", RPMTAG_ENHANCESFLAGS }, /* i   extension placeholder */
	{ "RPMTAG_PRIORITY", RPMTAG_PRIORITY }, /* i   extension placeholder */
	{ "RPMTAG_CVSID", RPMTAG_CVSID }, /* s */
	{ "RPMTAG_SVNID", RPMTAG_SVNID }, /* s */
	{ "RPMTAG_FIRSTFREE_TAG", RPMTAG_FIRSTFREE_TAG }, /*!< internal */
	{ "RPMTAG_EXTERNAL_TAG", RPMTAG_EXTERNAL_TAG }, 
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmTag) */
};
const struct rpmconstant_s * rpmTagctable = rpmTagctbl;


/* From rpmlib.h
 * prefix tag: RPMSENSE_
 * table: rpmsenseflags */
static const struct rpmconstant_s rpmsenseflagsctbl[] = {
#ifdef H_RPMLIB
	{ "RPMSENSE_ANY", RPMSENSE_ANY }, 
	{ "RPMSENSE_SERIAL", RPMSENSE_SERIAL }, 
	{ "RPMSENSE_LESS", RPMSENSE_LESS }, 
	{ "RPMSENSE_GREATER", RPMSENSE_GREATER }, 
	{ "RPMSENSE_EQUAL", RPMSENSE_EQUAL }, 
	{ "RPMSENSE_PROVIDES", RPMSENSE_PROVIDES }, 
	{ "RPMSENSE_CONFLICTS", RPMSENSE_CONFLICTS }, 
	{ "RPMSENSE_PREREQ", RPMSENSE_PREREQ }, 
	{ "RPMSENSE_OBSOLETES", RPMSENSE_OBSOLETES }, 
	{ "RPMSENSE_INTERP", RPMSENSE_INTERP }, 
	{ "RPMSENSE_SCRIPT_PRE", RPMSENSE_SCRIPT_PRE }, 
	{ "RPMSENSE_SCRIPT_POST", RPMSENSE_SCRIPT_POST }, 
	{ "RPMSENSE_SCRIPT_PREUN", RPMSENSE_SCRIPT_PREUN }, 
	{ "RPMSENSE_SCRIPT_POSTUN", RPMSENSE_SCRIPT_POSTUN }, 
	{ "RPMSENSE_SCRIPT_VERIFY", RPMSENSE_SCRIPT_VERIFY }, 
	{ "RPMSENSE_FIND_REQUIRES", RPMSENSE_FIND_REQUIRES }, 
	{ "RPMSENSE_FIND_PROVIDES", RPMSENSE_FIND_PROVIDES }, 
	{ "RPMSENSE_TRIGGERIN", RPMSENSE_TRIGGERIN }, 
	{ "RPMSENSE_TRIGGERUN", RPMSENSE_TRIGGERUN }, 
	{ "RPMSENSE_TRIGGERPOSTUN", RPMSENSE_TRIGGERPOSTUN }, 
	{ "RPMSENSE_MISSINGOK", RPMSENSE_MISSINGOK }, 
	{ "RPMSENSE_SCRIPT_PREP", RPMSENSE_SCRIPT_PREP }, 
	{ "RPMSENSE_SCRIPT_BUILD", RPMSENSE_SCRIPT_BUILD }, 
	{ "RPMSENSE_SCRIPT_INSTALL", RPMSENSE_SCRIPT_INSTALL }, 
	{ "RPMSENSE_SCRIPT_CLEAN", RPMSENSE_SCRIPT_CLEAN }, 
	{ "RPMSENSE_RPMLIB", RPMSENSE_RPMLIB }, 
	{ "RPMSENSE_TRIGGERPREIN", RPMSENSE_TRIGGERPREIN }, 
	{ "RPMSENSE_KEYRING", RPMSENSE_KEYRING }, 
	{ "RPMSENSE_PATCHES", RPMSENSE_PATCHES }, 
	{ "RPMSENSE_CONFIG", RPMSENSE_CONFIG }, 
	{ "RPMSENSE_SENSEMASK", RPMSENSE_SENSEMASK }, /* Mask to get senses, ie serial, */
	{ "RPMSENSE_TRIGGER", RPMSENSE_TRIGGER }, 
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmsenseflags) */
};
const struct rpmconstant_s * rpmsenseflagsctable = rpmsenseflagsctbl;


/* From rpmlib.h
 * prefix tag: 
 * table: fileTypes */
static const struct rpmconstant_s fileTypesctbl[] = {
#ifdef H_RPMLIB
	{ "PIPE", PIPE }, /*!< pipe/fifo */
	{ "CDEV", CDEV }, /*!< character device */
	{ "XDIR", XDIR }, /*!< directory */
	{ "BDEV", BDEV }, /*!< block device */
	{ "REG", REG }, /*!< regular file */
	{ "LINK", LINK }, /*!< hard link */
	{ "SOCK", SOCK }, /*!< socket */
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (fileTypes) */
};
const struct rpmconstant_s * fileTypesctable = fileTypesctbl;


/* From rpmlib.h
 * prefix tag: INSTALL_
 * table: rpmInstallInterfaceFlags */
static const struct rpmconstant_s rpmInstallInterfaceFlagsctbl[] = {
#ifdef H_RPMLIB
	{ "INSTALL_NONE", INSTALL_NONE }, 
	{ "INSTALL_PERCENT", INSTALL_PERCENT }, 
	{ "INSTALL_HASH", INSTALL_HASH }, 
	{ "INSTALL_NODEPS", INSTALL_NODEPS }, 
	{ "INSTALL_NOORDER", INSTALL_NOORDER }, 
	{ "INSTALL_LABEL", INSTALL_LABEL }, 
	{ "INSTALL_UPGRADE", INSTALL_UPGRADE }, 
	{ "INSTALL_FRESHEN", INSTALL_FRESHEN }, 
	{ "INSTALL_INSTALL", INSTALL_INSTALL }, 
	{ "INSTALL_ERASE", INSTALL_ERASE }, 
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmInstallInterfaceFlags) */
};
const struct rpmconstant_s * rpmInstallInterfaceFlagsctable = rpmInstallInterfaceFlagsctbl;


/* From rpmlib.h
 * prefix tag: 
 * table: rpmfileAttrs */
static const struct rpmconstant_s rpmfileAttrsctbl[] = {
#ifdef H_RPMLIB
	{ "RPMFILE_NONE", RPMFILE_NONE }, 
	{ "RPMFILE_CONFIG", RPMFILE_CONFIG }, 
	{ "RPMFILE_DOC", RPMFILE_DOC }, 
	{ "RPMFILE_ICON", RPMFILE_ICON }, 
	{ "RPMFILE_MISSINGOK", RPMFILE_MISSINGOK }, 
	{ "RPMFILE_NOREPLACE", RPMFILE_NOREPLACE }, 
	{ "RPMFILE_GHOST", RPMFILE_GHOST }, 
	{ "RPMFILE_LICENSE", RPMFILE_LICENSE }, 
	{ "RPMFILE_README", RPMFILE_README }, 
	{ "RPMFILE_UNPATCHED", RPMFILE_UNPATCHED }, 
	{ "RPMFILE_PUBKEY", RPMFILE_PUBKEY }, 
	{ "RPMFILE_POLICY", RPMFILE_POLICY }, 
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmfileAttrs) */
};
const struct rpmconstant_s * rpmfileAttrsctable = rpmfileAttrsctbl;


/* From rpmlib.h
 * prefix tag: RPMRC_
 * table: rpmRC */
static const struct rpmconstant_s rpmRCctbl[] = {
#ifdef H_RPMLIB
	{ "RPMRC_OK", RPMRC_OK }, /*!< Generic success code */
	{ "RPMRC_NOTFOUND", RPMRC_NOTFOUND }, /*!< Generic not found code. */
	{ "RPMRC_FAIL", RPMRC_FAIL }, /*!< Generic failure code. */
	{ "RPMRC_NOTTRUSTED", RPMRC_NOTTRUSTED }, /*!< Signature is OK, but key is not trusted. */
	{ "RPMRC_NOKEY", RPMRC_NOKEY }, /*!< Public key is unavailable. */
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmRC) */
};
const struct rpmconstant_s * rpmRCctable = rpmRCctbl;


/* From rpmlib.h
 * prefix tag: RPMDBI_
 * table: rpmdbi */
static const struct rpmconstant_s rpmdbictbl[] = {
#ifdef H_RPMLIB
	{ "RPMDBI_PACKAGES", RPMDBI_PACKAGES }, /* Installed package headers. */
	{ "RPMDBI_DEPENDS", RPMDBI_DEPENDS }, /* Dependency resolution cache. */
	{ "RPMDBI_LABEL", RPMDBI_LABEL }, /* Fingerprint search marker. */
	{ "RPMDBI_ADDED", RPMDBI_ADDED }, /* Added package headers. */
	{ "RPMDBI_REMOVED", RPMDBI_REMOVED }, /* Removed package headers. */
	{ "RPMDBI_AVAILABLE", RPMDBI_AVAILABLE }, /* Available package headers. */
	{ "RPMDBI_HDLIST", RPMDBI_HDLIST }, /* (rpmgi) Header list. */
	{ "RPMDBI_ARGLIST", RPMDBI_ARGLIST }, /* (rpmgi) Argument list. */
	{ "RPMDBI_FTSWALK", RPMDBI_FTSWALK }, /* (rpmgi) File tree  walk. */
#endif /* H_RPMLIB */
	{ NULL, 0 } /* NULL terminated (rpmdbi) */
};
const struct rpmconstant_s * rpmdbictable = rpmdbictbl;


/* From rpmlog.h
 * prefix tag: RPMLOG_
 * table: rpmlog */
static const struct rpmconstant_s rpmlogctbl[] = {
#ifdef H_RPMLOG
	{ "RPMLOG_EMERG", RPMLOG_EMERG }, /*!< system is unusable */
	{ "RPMLOG_ALERT", RPMLOG_ALERT }, /*!< action must be taken immediately */
	{ "RPMLOG_CRIT", RPMLOG_CRIT }, /*!< critical conditions */
	{ "RPMLOG_ERR", RPMLOG_ERR }, /*!< error conditions */
	{ "RPMLOG_WARNING", RPMLOG_WARNING }, /*!< warning conditions */
	{ "RPMLOG_NOTICE", RPMLOG_NOTICE }, /*!< normal but significant condition */
	{ "RPMLOG_INFO", RPMLOG_INFO }, /*!< informational */
	{ "RPMLOG_DEBUG", RPMLOG_DEBUG }, /*!< debug-level messages */
	{ "RPMLOG_PRIMASK", RPMLOG_PRIMASK }, /* mask to extract priority part (internal) */
	{ "RPMLOG_KERN", RPMLOG_KERN }, 
	{ "RPMLOG_USER", RPMLOG_USER }, 
	{ "RPMLOG_MAIL", RPMLOG_MAIL }, 
	{ "RPMLOG_DAEMON", RPMLOG_DAEMON }, 
	{ "RPMLOG_AUTH", RPMLOG_AUTH }, 
	{ "RPMLOG_SYSLOG", RPMLOG_SYSLOG }, 
	{ "RPMLOG_LPR", RPMLOG_LPR }, 
	{ "RPMLOG_NEWS", RPMLOG_NEWS }, 
	{ "RPMLOG_UUCP", RPMLOG_UUCP }, 
	{ "RPMLOG_CRON", RPMLOG_CRON }, 
	{ "RPMLOG_AUTHPRIV", RPMLOG_AUTHPRIV }, 
	{ "RPMLOG_FTP", RPMLOG_FTP }, 
	{ "RPMLOG_LOCAL0", RPMLOG_LOCAL0 }, 
	{ "RPMLOG_LOCAL1", RPMLOG_LOCAL1 }, 
	{ "RPMLOG_LOCAL2", RPMLOG_LOCAL2 }, 
	{ "RPMLOG_LOCAL3", RPMLOG_LOCAL3 }, 
	{ "RPMLOG_LOCAL4", RPMLOG_LOCAL4 }, 
	{ "RPMLOG_LOCAL5", RPMLOG_LOCAL5 }, 
	{ "RPMLOG_LOCAL6", RPMLOG_LOCAL6 }, 
	{ "RPMLOG_LOCAL7", RPMLOG_LOCAL7 }, 
	{ "RPMLOG_NFACILITIES", RPMLOG_NFACILITIES }, /*!< current number of facilities */
	{ "RPMLOG_ERRMSG", RPMLOG_ERRMSG }, 
	{ "RPMLOG_FACMASK", RPMLOG_FACMASK }, /*!< mask to extract facility part */
	{ "RPMLOG_ODELAY", RPMLOG_ODELAY }, /*!< delay open until first syslog() (default) */
	{ "RPMLOG_NDELAY", RPMLOG_NDELAY }, /*!< don't delay open */
	{ "RPMLOG_PID", RPMLOG_PID }, /*!< log the pid with each message */
	{ "RPMLOG_CONS", RPMLOG_CONS }, /*!< log on the console if errors in sending */
	{ "RPMLOG_NOWAIT", RPMLOG_NOWAIT }, /*!< don't wait for console forks: DEPRECATED */
	{ "RPMLOG_PERROR", RPMLOG_PERROR }, /*!< log to stderr as well */
#endif /* H_RPMLOG */
	{ NULL, 0 } /* NULL terminated (rpmlog) */
};
const struct rpmconstant_s * rpmlogctable = rpmlogctbl;


/* From rpmmacro.h
 * prefix tag: RMIL_
 * table: rpmMacrosContext */
static const struct rpmconstant_s rpmMacrosContextctbl[] = {
#ifdef _H_MACRO_
	{ "RMIL_DEFAULT", RMIL_DEFAULT }, 
	{ "RMIL_MACROFILES", RMIL_MACROFILES }, 
	{ "RMIL_RPMRC", RMIL_RPMRC }, 
	{ "RMIL_CMDLINE", RMIL_CMDLINE }, 
	{ "RMIL_TARBALL", RMIL_TARBALL }, 
	{ "RMIL_SPEC", RMIL_SPEC }, 
	{ "RMIL_OLDSPEC", RMIL_OLDSPEC }, 
	{ "RMIL_GLOBAL", RMIL_GLOBAL }, 
#endif /* _H_MACRO_ */
	{ NULL, 0 } /* NULL terminated (rpmMacrosContext) */
};
const struct rpmconstant_s * rpmMacrosContextctable = rpmMacrosContextctbl;


/* From rpmps.h
 * prefix tag: RPMPROB_
 * table: rpmProblemType */
static const struct rpmconstant_s rpmProblemTypectbl[] = {
#ifdef H_RPMPS
	{ "RPMPROB_BADARCH", RPMPROB_BADARCH }, /*!< package ... is for a different architecture */
	{ "RPMPROB_BADOS", RPMPROB_BADOS }, /*!< package ... is for a different operating system */
	{ "RPMPROB_PKG_INSTALLED", RPMPROB_PKG_INSTALLED }, /*!< package ... is already installed */
	{ "RPMPROB_BADRELOCATE", RPMPROB_BADRELOCATE }, /*!< path ... is not relocatable for package ... */
	{ "RPMPROB_REQUIRES", RPMPROB_REQUIRES }, /*!< package ... has unsatisfied Requires: ... */
	{ "RPMPROB_CONFLICT", RPMPROB_CONFLICT }, /*!< package ... has unsatisfied Conflicts: ... */
	{ "RPMPROB_NEW_FILE_CONFLICT", RPMPROB_NEW_FILE_CONFLICT }, /*!< file ... conflicts between attemped installs of ... */
	{ "RPMPROB_FILE_CONFLICT", RPMPROB_FILE_CONFLICT }, /*!< file ... from install of ... conflicts with file from package ... */
	{ "RPMPROB_OLDPACKAGE", RPMPROB_OLDPACKAGE }, /*!< package ... (which is newer than ...) is already installed */
	{ "RPMPROB_DISKSPACE", RPMPROB_DISKSPACE }, /*!< installing package ... needs ... on the ... filesystem */
	{ "RPMPROB_DISKNODES", RPMPROB_DISKNODES }, /*!< installing package ... needs ... on the ... filesystem */
	{ "RPMPROB_BADPRETRANS", RPMPROB_BADPRETRANS }, /*!< (unimplemented) */
#endif /* H_RPMPS */
	{ NULL, 0 } /* NULL terminated (rpmProblemType) */
};
const struct rpmconstant_s * rpmProblemTypectable = rpmProblemTypectbl;


/* From rpmte.h
 * prefix tag: TR_
 * table: rpmElementType */
static const struct rpmconstant_s rpmElementTypectbl[] = {
#ifdef H_RPMTE
	{ "TR_ADDED", TR_ADDED }, 
	{ "TR_REMOVED", TR_REMOVED }, 
#endif /* H_RPMTE */
	{ NULL, 0 } /* NULL terminated (rpmElementType) */
};
const struct rpmconstant_s * rpmElementTypectable = rpmElementTypectbl;


/* From rpmts.h
 * prefix tag: RPMTS_OP_
 * table: rpmtsOpX */
static const struct rpmconstant_s rpmtsOpXctbl[] = {
#ifdef H_RPMTS
	{ "RPMTS_OP_TOTAL", RPMTS_OP_TOTAL }, 
	{ "RPMTS_OP_CHECK", RPMTS_OP_CHECK }, 
	{ "RPMTS_OP_ORDER", RPMTS_OP_ORDER }, 
	{ "RPMTS_OP_FINGERPRINT", RPMTS_OP_FINGERPRINT }, 
	{ "RPMTS_OP_REPACKAGE", RPMTS_OP_REPACKAGE }, 
	{ "RPMTS_OP_INSTALL", RPMTS_OP_INSTALL }, 
	{ "RPMTS_OP_ERASE", RPMTS_OP_ERASE }, 
	{ "RPMTS_OP_SCRIPTLETS", RPMTS_OP_SCRIPTLETS }, 
	{ "RPMTS_OP_COMPRESS", RPMTS_OP_COMPRESS }, 
	{ "RPMTS_OP_UNCOMPRESS", RPMTS_OP_UNCOMPRESS }, 
	{ "RPMTS_OP_DIGEST", RPMTS_OP_DIGEST }, 
	{ "RPMTS_OP_SIGNATURE", RPMTS_OP_SIGNATURE }, 
	{ "RPMTS_OP_DBADD", RPMTS_OP_DBADD }, 
	{ "RPMTS_OP_DBREMOVE", RPMTS_OP_DBREMOVE }, 
	{ "RPMTS_OP_DBGET", RPMTS_OP_DBGET }, 
	{ "RPMTS_OP_DBPUT", RPMTS_OP_DBPUT }, 
	{ "RPMTS_OP_DBDEL", RPMTS_OP_DBDEL }, 
	{ "RPMTS_OP_MAX", RPMTS_OP_MAX }, 
#endif /* H_RPMTS */
	{ NULL, 0 } /* NULL terminated (rpmtsOpX) */
};
const struct rpmconstant_s * rpmtsOpXctable = rpmtsOpXctbl;


/* From rpmts.h
 * prefix tag: RPMVSF_
 * table: rpmvsflags */
static const struct rpmconstant_s rpmvsflagsctbl[] = {
#ifdef H_RPMTS
	{ "RPMVSF_DEFAULT", RPMVSF_DEFAULT }, 
	{ "RPMVSF_NOHDRCHK", RPMVSF_NOHDRCHK }, 
	{ "RPMVSF_NEEDPAYLOAD", RPMVSF_NEEDPAYLOAD }, 
	{ "RPMVSF_NOSHA1HEADER", RPMVSF_NOSHA1HEADER }, 
	{ "RPMVSF_NOMD5HEADER", RPMVSF_NOMD5HEADER }, 
	{ "RPMVSF_NODSAHEADER", RPMVSF_NODSAHEADER }, 
	{ "RPMVSF_NORSAHEADER", RPMVSF_NORSAHEADER }, 
	{ "RPMVSF_NOSHA1", RPMVSF_NOSHA1 }, 
	{ "RPMVSF_NOMD5", RPMVSF_NOMD5 }, 
	{ "RPMVSF_NODSA", RPMVSF_NODSA }, 
	{ "RPMVSF_NORSA", RPMVSF_NORSA }, 
	{ "RPMVSF_NODIGESTS", _RPMVSF_NODIGESTS }, 
	{ "RPMVSF_NOSIGNATURES", _RPMVSF_NOSIGNATURES }, 
	{ "RPMVSF_NOHEADER", _RPMVSF_NOHEADER }, 
	{ "RPMVSF_NOPAYLOAD", _RPMVSF_NOPAYLOAD }, 
#endif /* H_RPMTS */
	{ NULL, 0 } /* NULL terminated (rpmvsflags) */
};
const struct rpmconstant_s * rpmvsflagsctable = rpmvsflagsctbl;


/* From rpmts.h
 * prefix tag: RPMTRANS_TYPE_
 * table: rpmtsType */
static const struct rpmconstant_s rpmtsTypectbl[] = {
#ifdef H_RPMTS
	{ "RPMTRANS_TYPE_NORMAL", RPMTRANS_TYPE_NORMAL }, 
	{ "RPMTRANS_TYPE_ROLLBACK", RPMTRANS_TYPE_ROLLBACK }, 
	{ "RPMTRANS_TYPE_AUTOROLLBACK", RPMTRANS_TYPE_AUTOROLLBACK }, 
#endif /* H_RPMTS */
	{ NULL, 0 } /* NULL terminated (rpmtsType) */
};
const struct rpmconstant_s * rpmtsTypectable = rpmtsTypectbl;

static const struct rpmconstantlist_s rpmconstanttp[] = {
	{ (void *)fileActionctbl, "fileaction", "FA_" },
	{ (void *)fileTypesctbl, "filetypes", NULL },
	{ (void *)hMagicctbl, "hmagic", NULL },
	{ (void *)rpmBuildFlagsctbl, "rpmbuildflags", "RPMBUILD_" },
	{ (void *)rpmElementTypectbl, "rpmelementtype", "TR_" },
	{ (void *)rpmEraseInterfaceFlagsctbl, "rpmeraseinterfaceflags", "UNINSTALL_" },
	{ (void *)rpmInstallInterfaceFlagsctbl, "rpminstallinterfaceflags", "INSTALL_" },
	{ (void *)rpmMacrosContextctbl, "rpmmacroscontext", "RMIL_" },
	{ (void *)rpmMireModectbl, "rpmmiremode", "RPMMIRE_" },
	{ (void *)rpmParseStatectbl, "rpmparsestate", "PART_" },
	{ (void *)rpmProblemTypectbl, "rpmproblemtype", "RPMPROB_" },
	{ (void *)rpmRCctbl, "rpmrc", "RPMRC_" },
	{ (void *)rpmSignFlagsctbl, "rpmsignflags", "RPMSIGN_" },
	{ (void *)rpmTagctbl, "rpmtag", "RPMTAG_" },
	{ (void *)rpmTagTypectbl, "rpmtagtype", "RPM_" },
	{ (void *)rpmVerifyFlagsctbl, "rpmverifyflags", "VERIFY_" },
	{ (void *)rpm_machtablectbl, "rpm_machtable", "RPM_MACHTABLE_" },
	{ (void *)rpmdbictbl, "rpmdbi", "RPMDBI_" },
	{ (void *)rpmerrCodectbl, "rpmerrcode", "RPMERR_" },
	{ (void *)rpmfileAttrsctbl, "rpmfileattrs", NULL },
	{ (void *)rpmfileStatectbl, "rpmfilestate", "RPMFILE_" },
	{ (void *)rpmlogctbl, "rpmlog", "RPMLOG_" },
	{ (void *)rpmprobFilterFlagsctbl, "rpmprobfilterflags", "RPMPROB_FILTER_" },
	{ (void *)rpmsenseflagsctbl, "rpmsenseflags", "RPMSENSE_" },
	{ (void *)rpmtagSignaturectbl, "rpmtagsignature", "RPMSIGTAG_" },
	{ (void *)rpmtransFlagsctbl, "rpmtransflags", "RPMTRANS_FLAG_" },
	{ (void *)rpmtsOpXctbl, "rpmtsopx", "RPMTS_OP_" },
	{ (void *)rpmtsTypectbl, "rpmtstype", "RPMTRANS_TYPE_" },
	{ (void *)rpmvsflagsctbl, "rpmvsflags", "RPMVSF_" },
	{ (void *) NULL, NULL, NULL } /* NULL terminated */
};
const struct rpmconstantlist_s * rpmconstanttype = rpmconstanttp;
const int rpmconstanttypesize = sizeof(rpmconstanttp) / sizeof(rpmconstanttp[0]) -1;
