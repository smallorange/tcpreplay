/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (tcpedit_stub.h)
 *  
 *  It has been AutoGen-ed  May  7, 2013 at 11:11:35 PM by AutoGen 5.16.2
 *  From the definitions    /Users/aturner/GIT/tcpreplay/src/tcpedit/tcpedit_stub.def
 *  and the template file   options
 *
 * Generated from AutoOpts 36:5:11 templates.
 *
 *  AutoOpts is a copyrighted work.  This header file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the tcpedit_stub author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 */
/*
 *  This file contains the programmatic interface to the Automated
 *  Options generated for the tcpedit_stub program.
 *  These macros are documented in the AutoGen info file in the
 *  "AutoOpts" chapter.  Please refer to that doc for usage help.
 */
#ifndef AUTOOPTS_TCPEDIT_STUB_H_GUARD
#define AUTOOPTS_TCPEDIT_STUB_H_GUARD 1
#include <autoopts/options.h>

/*
 *  Enumeration of each option:
 */
typedef enum {
    INDEX_OPT_PORTMAP          =  1,
    INDEX_OPT_SEED             =  2,
    INDEX_OPT_PNAT             =  3,
    INDEX_OPT_SRCIPMAP         =  4,
    INDEX_OPT_DSTIPMAP         =  5,
    INDEX_OPT_ENDPOINTS        =  6,
    INDEX_OPT_SKIPBROADCAST    =  7,
    INDEX_OPT_FIXCSUM          =  8,
    INDEX_OPT_MTU              =  9,
    INDEX_OPT_MTU_TRUNC        = 10,
    INDEX_OPT_EFCS             = 11,
    INDEX_OPT_TTL              = 12,
    INDEX_OPT_TOS              = 13,
    INDEX_OPT_TCLASS           = 14,
    INDEX_OPT_FLOWLABEL        = 15,
    INDEX_OPT_FIXLEN           = 16,
    INDEX_OPT_SKIPL2BROADCAST  = 17,
    INDEX_OPT_DLT              = 18,
    INDEX_OPT_ENET_DMAC        = 19,
    INDEX_OPT_ENET_SMAC        = 20,
    INDEX_OPT_ENET_VLAN        = 21,
    INDEX_OPT_ENET_VLAN_TAG    = 22,
    INDEX_OPT_ENET_VLAN_CFI    = 23,
    INDEX_OPT_ENET_VLAN_PRI    = 24,
    INDEX_OPT_HDLC_CONTROL     = 25,
    INDEX_OPT_HDLC_ADDRESS     = 26,
    INDEX_OPT_USER_DLT         = 27,
    INDEX_OPT_USER_DLINK       = 28,
        LIBRARY_OPTION_COUNT
} teOptIndex;

#define OPTION_CT    29

/*
 *  Interface defines for all options.  Replace "n" with the UPPER_CASED
 *  option name (as in the teOptIndex enumeration above).
 *  e.g. HAVE_OPT(TCPEDIT)
 */
extern tOptDesc * const tcpedit_tcpedit_optDesc_p;
#define         DESC(n) (tcpedit_tcpedit_optDesc_p[INDEX_OPT_## n])
#define     HAVE_OPT(n) (! UNUSED_OPT(& DESC(n)))
#define      OPT_ARG(n) (DESC(n).optArg.argString)
#define    STATE_OPT(n) (DESC(n).fOptState & OPTST_SET_MASK)
#define    COUNT_OPT(n) (DESC(n).optOccCt)
#define    ISSEL_OPT(n) (SELECTED_OPT(&DESC(n)))
#define ISUNUSED_OPT(n) (UNUSED_OPT(& DESC(n)))
#define  ENABLED_OPT(n) (! DISABLED_OPT(& DESC(n)))
#define  STACKCT_OPT(n) (((tArgList*)(DESC(n).optCookie))->useCt)
#define STACKLST_OPT(n) (((tArgList*)(DESC(n).optCookie))->apzArgs)
#define    CLEAR_OPT(n) STMTS( \
                DESC(n).fOptState &= OPTST_PERSISTENT_MASK;   \
                if ((DESC(n).fOptState & OPTST_INITENABLED) == 0) \
                    DESC(n).fOptState |= OPTST_DISABLED; \
                DESC(n).optCookie = NULL )

/* * * * * *
 *
 *  Enumeration of tcpedit_stub exit codes
 */
typedef enum {
    TCPEDIT_STUB_EXIT_SUCCESS = 0,
    TCPEDIT_STUB_EXIT_FAILURE = 1,
    TCPEDIT_STUB_EXIT_LIBOPTS_FAILURE = 70
} tcpedit_stub_exit_code_t;
/* * * * * *
 *
 *  Interface defines for specific options.
 */
#define VALUE_OPT_PORTMAP        'r'
#define VALUE_OPT_SEED           's'

#define OPT_VALUE_SEED           (DESC(SEED).optArg.argInt)
#define VALUE_OPT_PNAT           'N'
#define VALUE_OPT_SRCIPMAP       'S'
#define VALUE_OPT_DSTIPMAP       'D'
#define VALUE_OPT_ENDPOINTS      'e'
#define VALUE_OPT_SKIPBROADCAST  'b'
#define VALUE_OPT_FIXCSUM        'C'
#define VALUE_OPT_MTU            'm'

#define OPT_VALUE_MTU            (DESC(MTU).optArg.argInt)
#define VALUE_OPT_MTU_TRUNC      10
#define VALUE_OPT_EFCS           'E'
#define VALUE_OPT_TTL            12
#define VALUE_OPT_TOS            13

#define OPT_VALUE_TOS            (DESC(TOS).optArg.argInt)
#define VALUE_OPT_TCLASS         14

#define OPT_VALUE_TCLASS         (DESC(TCLASS).optArg.argInt)
#define VALUE_OPT_FLOWLABEL      15

#define OPT_VALUE_FLOWLABEL      (DESC(FLOWLABEL).optArg.argInt)
#define VALUE_OPT_FIXLEN         'F'
#define VALUE_OPT_SKIPL2BROADCAST 17
#define VALUE_OPT_DLT            18
#define VALUE_OPT_ENET_DMAC      19
#define VALUE_OPT_ENET_SMAC      20
#define VALUE_OPT_ENET_VLAN      21
#define VALUE_OPT_ENET_VLAN_TAG  22

#define OPT_VALUE_ENET_VLAN_TAG  (DESC(ENET_VLAN_TAG).optArg.argInt)
#define VALUE_OPT_ENET_VLAN_CFI  23

#define OPT_VALUE_ENET_VLAN_CFI  (DESC(ENET_VLAN_CFI).optArg.argInt)
#define VALUE_OPT_ENET_VLAN_PRI  24

#define OPT_VALUE_ENET_VLAN_PRI  (DESC(ENET_VLAN_PRI).optArg.argInt)
#define VALUE_OPT_HDLC_CONTROL   25

#define OPT_VALUE_HDLC_CONTROL   (DESC(HDLC_CONTROL).optArg.argInt)
#define VALUE_OPT_HDLC_ADDRESS   26

#define OPT_VALUE_HDLC_ADDRESS   (DESC(HDLC_ADDRESS).optArg.argInt)
#define VALUE_OPT_USER_DLT       27

#define OPT_VALUE_USER_DLT       (DESC(USER_DLT).optArg.argInt)
#define VALUE_OPT_USER_DLINK     28
#define VALUE_OPT_HELP          '?'
#define VALUE_OPT_MORE_HELP     '!'
/* extracted from opthead.tlib near line 484 */

#endif /* AUTOOPTS_TCPEDIT_STUB_H_GUARD */
/* tcpedit_stub.h ends here */
