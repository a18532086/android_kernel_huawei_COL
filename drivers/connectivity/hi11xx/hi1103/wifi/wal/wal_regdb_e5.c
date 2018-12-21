


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 头文件包含
*****************************************************************************/
//#include "wal_regdb.h"

/*****************************************************************************
  2 全局变量定义
*****************************************************************************/
#if (_PRE_OS_VERSION_LINUX == _PRE_OS_VERSION)
/*
    以下管制域数据库由工具生成:
    Step 1: 从http://wireless.kernel.org/download/wireless-regdb/regulatory.bins/
            下载最新的管制域二进制文件regulatory.bin
    Step 2: regdbdump regulatory.bin >> db.txt
    Step 3: kernel/net/wireless/genregdb.awk db.txt >> wal_regdb.c
 */
/* 根据WIFI-2.4G-5G-国家码信道对应表更新管制域信息*/
#ifdef _PRE_WLAN_FEATURE_11D
static const struct ieee80211_regdomain regdom_AE = {
    .alpha2 = "AE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 23, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AF = {
    .alpha2 = "AF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

/**
 * not restrict in CRDA
 * use world regulatory domain's max_eirp: 20
 * REF:
   https://git.kernel.org/cgit/linux/kernel/git/linville/wireless-regdb.git/tree/db.txt
 */
static const struct ieee80211_regdomain regdom_AG = {
    .alpha2 = "AG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AI = {
    .alpha2 = "AI",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 27,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 27, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AL = {
    .alpha2 = "AL",
    .reg_rules = {
        REG_RULE(2402, 2482, 20, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_AM = {
    .alpha2 = "AM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 18,
            NL80211_RRF_NO_OUTDOOR | 0),
    },
    .n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_AN = {
    .alpha2 = "AN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 27,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 27, 0),
    },
    .n_reg_rules = 5
};

/**
 * not restrict in CRDA
 * use world regulatory domain's max_eirp: 20
 * REF:
   https://git.kernel.org/cgit/linux/kernel/git/linville/wireless-regdb.git/tree/db.txt
 */
static const struct ieee80211_regdomain regdom_AO = {
    .alpha2 = "AO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 20,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_AR = {
    .alpha2 = "AR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AS = {
    .alpha2 = "AS",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AT = {
    .alpha2 = "AT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_AU = {
    .alpha2 = "AU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5590, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_AW = {
    .alpha2 = "AW",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 27,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 27, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_AZ = {
    .alpha2 = "AZ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 18,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 18,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 18,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BA = {
    .alpha2 = "BA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BD = {
    .alpha2 = "BD",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_BE = {
    .alpha2 = "BE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BG = {
    .alpha2 = "BG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BH = {
    .alpha2 = "BH",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BM = {
    .alpha2 = "BM",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BL = {
    .alpha2 = "BL",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 18,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 18,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_BN = {
    .alpha2 = "BN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BO = {
    .alpha2 = "BO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5250, 5330, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_BR = {
    .alpha2 = "BR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BS = {
    .alpha2 = "BS",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BY = {
    .alpha2 = "BY",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BZ = {
    .alpha2 = "BZ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CA = {
    .alpha2 = "CA",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CH = {
    .alpha2 = "CH",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CL = {
    .alpha2 = "CL",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CN = {
    .alpha2 = "CN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 27, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
        	NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 27, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CO = {
    .alpha2 = "CO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 27, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

/**
 * not restrict in CRDA
 * use world regulatory domain's max_eirp: 20
 * REF:
   https://git.kernel.org/cgit/linux/kernel/git/linville/wireless-regdb.git/tree/db.txt
 */
static const struct ieee80211_regdomain regdom_CU = {
    .alpha2 = "CU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CR = {
    .alpha2 = "CR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_CS = {
    .alpha2 = "CS",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CY = {
    .alpha2 = "CY",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CZ = {
    .alpha2 = "CZ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_DE = {
    .alpha2 = "DE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_DK = {
    .alpha2 = "DK",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_DO = {
    .alpha2 = "DO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_DZ = {
    .alpha2 = "DZ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_EC = {
    .alpha2 = "EC",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_EE = {
    .alpha2 = "EE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_EG = {
    .alpha2 = "EG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 40, 0, 23, 0),
        REG_RULE(5250, 5330, 40, 0, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 40, 0, 23, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_ES = {
    .alpha2 = "ES",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_ET = {
    .alpha2 = "ET",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_FI = {
    .alpha2 = "FI",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_FR = {
    .alpha2 = "FR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GB = {
    .alpha2 = "GB",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GD = {
    .alpha2 = "GD",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 0, 17, 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GF = {
    .alpha2 = "GF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GL = {
    .alpha2 = "GL",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GU = {
    .alpha2 = "GU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 0, 17, 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GE = {
    .alpha2 = "GE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 18,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 18,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 18,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GR = {
    .alpha2 = "GR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GT = {
    .alpha2 = "GT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_HK = {
    .alpha2 = "HK",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_HN = {
    .alpha2 = "HN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_HR = {
    .alpha2 = "HR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_HU = {
    .alpha2 = "HU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_ID = {
    .alpha2 = "ID",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5735, 5815, 40, 0, 20, 0),
    },
    .n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_IE = {
    .alpha2 = "IE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_IL = {
    .alpha2 = "IL",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_IN = {
    .alpha2 = "IN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_IQ = {
    .alpha2 = "IQ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 30,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_IR = {
    .alpha2 = "IR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 30,
        	NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_IS = {
    .alpha2 = "IS",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_IT = {
    .alpha2 = "IT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_JM = {
    .alpha2 = "JM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_JO = {
    .alpha2 = "JO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5735, 5835, 80, 0, 18, 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_JP = {
    .alpha2 = "JP",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_KE = {
    .alpha2 = "KE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 23, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KH = {
    .alpha2 = "KH",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 27,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 27, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KY = {
    .alpha2 = "KY",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KP = {
    .alpha2 = "KP",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 30,
        	NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_KR = {
    .alpha2 = "KR",
    .reg_rules = {
        REG_RULE(2402, 2482, 20, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 30,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5630, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5815, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KW = {
    .alpha2 = "KW",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_KZ = {
    .alpha2 = "KZ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

/**
 * not restrict in CRDA
 * use world regulatory domain's max_eirp: 20
 * REF:
   https://git.kernel.org/cgit/linux/kernel/git/linville/wireless-regdb.git/tree/db.txt
 */
static const struct ieee80211_regdomain regdom_LA = {
    .alpha2 = "LA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LB = {
    .alpha2 = "LB",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5490, 5730, 80, 0, 30, 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LI = {
    .alpha2 = "LI",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_LK = {
    .alpha2 = "LK",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LS = {
    .alpha2 = "LS",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_LT = {
    .alpha2 = "LT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_LU = {
    .alpha2 = "LU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_LV = {
    .alpha2 = "LV",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MA = {
    .alpha2 = "MA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_MC = {
    .alpha2 = "MC",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 18,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 18,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 18, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MD = {
    .alpha2 = "MD",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_ME = {
    .alpha2 = "ME",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MH = {
    .alpha2 = "MH",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MK = {
    .alpha2 = "MK",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MO = {
    .alpha2 = "MO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5490, 5730, 80, 3, 30, 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MN = {
    .alpha2 = "MN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MR = {
    .alpha2 = "MR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MU = {
    .alpha2 = "MU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 24,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

/**
 * not restrict in CRDA
 * use world regulatory domain's max_eirp: 20
 * REF:
   https://git.kernel.org/cgit/linux/kernel/git/linville/wireless-regdb.git/tree/db.txt
 */
static const struct ieee80211_regdomain regdom_MV = {
    .alpha2 = "MV",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MW = {
    .alpha2 = "MW",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MT = {
    .alpha2 = "MT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MX = {
    .alpha2 = "MX",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5590, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 6
};


static const struct ieee80211_regdomain regdom_MY = {
    .alpha2 = "MY",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 23, 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5650, 80, 0, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NG = {
    .alpha2 = "NG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_NI = {
    .alpha2 = "NI",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NL = {
    .alpha2 = "NL",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NO = {
    .alpha2 = "NO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NP = {
    .alpha2 = "NP",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NZ = {
    .alpha2 = "NZ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_OM = {
    .alpha2 = "OM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 3, 30,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_PA = {
    .alpha2 = "PA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 4
};


static const struct ieee80211_regdomain regdom_PE = {
    .alpha2 = "PE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PG = {
    .alpha2 = "PG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5590, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_PH = {
    .alpha2 = "PH",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 17, 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};


static const struct ieee80211_regdomain regdom_PK = {
    .alpha2 = "PK",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_PL = {
    .alpha2 = "PL",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};


static const struct ieee80211_regdomain regdom_PR = {
    .alpha2 = "PR",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PY = {
    .alpha2 = "PY",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PT = {
    .alpha2 = "PT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_QA = {
    .alpha2 = "QA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_RO = {
    .alpha2 = "RO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_RE = {
    .alpha2 = "RE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

/**
 * NOT RIGHT YET
country RS: DFS-ETSI
	(2400 - 2483.5 @ 40), (100 mW)
	(5150 - 5350 @ 40), (200 mW), NO-OUTDOOR
	(5470 - 5725 @ 20), (1000 mW), DFS
	# 60 gHz band channels 1-4, ref: Etsi En 302 567
	(57000 - 66000 @ 2160), (40)
 **/
static const struct ieee80211_regdomain regdom_RS = {
    .alpha2 = "RS",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 20,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_RU = {
    .alpha2 = "RU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 0, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SA = {
    .alpha2 = "SA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 23, 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5815, 80, 3, 20, 0),
    },
    .n_reg_rules = 5
};

/**
 * not restrict in CRDA
 * use world regulatory domain's max_eirp: 20
 * REF:
   https://git.kernel.org/cgit/linux/kernel/git/linville/wireless-regdb.git/tree/db.txt
 */
static const struct ieee80211_regdomain regdom_SD = {
    .alpha2 = "SD",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_SN = {
    .alpha2 = "SN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 17, 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_SE = {
    .alpha2 = "SE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_SG = {
    .alpha2 = "SG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 23, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SI = {
    .alpha2 = "SI",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_SK = {
    .alpha2 = "SK",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_SV = {
    .alpha2 = "SV",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SY = {
    .alpha2 = "SY",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5330, 80, 0, 20, 0),
        REG_RULE(5490, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_TH = {
    .alpha2 = "TH",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TN = {
    .alpha2 = "TN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 3
};

static const struct ieee80211_regdomain regdom_TR = {
    .alpha2 = "TR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TT = {
    .alpha2 = "TT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TW = {
    .alpha2 = "TW",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

/**
 * NOT CORRECT YET
country UA: DFS-ETSI
	(2400 - 2483.5 @ 40), (20), NO-OUTDOOR
	(5150 - 5350 @ 40), (20), NO-OUTDOOR
	(5490 - 5670 @ 80), (20), DFS
	(5735 - 5835 @ 80), (20)
	# 60 gHz band channels 1-4, ref: Etsi En 302 567
	(57000 - 66000 @ 2160), (40)
 **/
static const struct ieee80211_regdomain regdom_UA = {
    .alpha2 = "UA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5670, 80, 0, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_US = {
    .alpha2 = "US",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_UY = {
    .alpha2 = "UY",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_UZ = {
    .alpha2 = "UZ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 3, 24,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_UG = {
    .alpha2 = "UG",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

/**
 * not restrict in CRDA
 * use world regulatory domain's max_eirp: 20
 * REF:
   https://git.kernel.org/cgit/linux/kernel/git/linville/wireless-regdb.git/tree/db.txt
 */
static const struct ieee80211_regdomain regdom_VA = {
    .alpha2 = "VA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 20,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_VI = {
    .alpha2 = "VI",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_VE = {
    .alpha2 = "VE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 30,
        	NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_VN = {
    .alpha2 = "VN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 17, 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_YE = {
    .alpha2 = "YE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_YT = {
    .alpha2 = "YT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_ZA = {
    .alpha2 = "ZA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 3, 24,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

/**
 * not restrict in CRDA
 * use world regulatory domain's max_eirp: 20
 * REF:
   https://git.kernel.org/cgit/linux/kernel/git/linville/wireless-regdb.git/tree/db.txt
 */
static const struct ieee80211_regdomain regdom_ZM = {
    .alpha2 = "ZM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 20,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_ZW = {
    .alpha2 = "ZW",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 20,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};
/* 参考broadcom国家码信道规格表，新增的 */
static const struct ieee80211_regdomain regdom_AD = {
    .alpha2 = "AD",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 20,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BJ = {
    .alpha2 = "BJ",
        .reg_rules = {
            REG_RULE(2402, 2482, 40, 0, 20, 0),
            REG_RULE(5170, 5250, 80, 0, 23,
                NL80211_RRF_NO_OUTDOOR | 0),
            REG_RULE(5250, 5330, 80, 0, 23,
                NL80211_RRF_NO_OUTDOOR |
                NL80211_RRF_DFS | 0),
            REG_RULE(5490, 5730, 80, 0, 23,
                NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BT = {
    .alpha2 = "BT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BW = {
    .alpha2 = "BW",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_IO = {
    .alpha2 = "IO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 20, 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_VG = {
    .alpha2 = "VG",
        .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 27,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 27, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_BF = {
    .alpha2 = "BF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_BI = {
    .alpha2 = "BI",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CM = {
    .alpha2 = "CM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CV = {
    .alpha2 = "CV",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CF = {
    .alpha2 = "CF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TD = {
    .alpha2 = "TD",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CX = {
    .alpha2 = "CX",
    .reg_rules = {    
        REG_RULE(2402, 2472, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5590, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_CC = {
    .alpha2 = "CC",
    .reg_rules = {    
        REG_RULE(2402, 2472, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5590, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_KM = {
    .alpha2 = "KM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CD = {
    .alpha2 = "CD",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CG = {
    .alpha2 = "CG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CI = {
    .alpha2 = "CI",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_DJ = {
    .alpha2 = "DJ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
    },
    .n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_DM = {
    .alpha2 = "DM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_EQ = {
    .alpha2 = "EQ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_ER = {
    .alpha2 = "ER",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
    },
    .n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_FK = {
    .alpha2 = "FK",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_FO = {
    .alpha2 = "FO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_FJ = {
    .alpha2 = "FJ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5590, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_PF = {
    .alpha2 = "PF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TF = {
    .alpha2 = "TF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GA = {
    .alpha2 = "GA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GM = {
    .alpha2 = "GM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GH = {
    .alpha2 = "GH",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GI = {
    .alpha2 = "GI",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GP = {
    .alpha2 = "GP",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GG = {
    .alpha2 = "GG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GN = {
    .alpha2 = "GN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_GW = {
    .alpha2 = "GW",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_GY = {
    .alpha2 = "GY",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5490, 5730, 80, 3, 30, 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_HT = {
    .alpha2 = "HT",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_HM = {
    .alpha2 = "HM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5590, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_JE = {
    .alpha2 = "JE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_KI = {
    .alpha2 = "KI",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 23, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_XK = {
    .alpha2 = "XK",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 23, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_KG = {
    .alpha2 = "KG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_LR = {
    .alpha2 = "LR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5490, 5730, 80, 0, 30, 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LY = {
    .alpha2 = "LY",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MG = {
    .alpha2 = "MG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_ML = {
    .alpha2 = "ML",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_IM = {
    .alpha2 = "IM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MQ = {
    .alpha2 = "MQ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_FM = {
    .alpha2 = "FM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 30,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5490, 5730, 80, 3, 30, 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MS = {
    .alpha2 = "MS",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_MM = {
    .alpha2 = "MM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 27,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_CK = {
    .alpha2 = "CK",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NA = {
    .alpha2 = "NA",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NR = {
    .alpha2 = "NR",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NC = {
    .alpha2 = "NC",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NE = {
    .alpha2 = "NE",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_NU = {
    .alpha2 = "NU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 24,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_NF = {
    .alpha2 = "NF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5590, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5650, 5710, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 6
};

static const struct ieee80211_regdomain regdom_MP = {
    .alpha2 = "MP",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 3, 30,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PN = {
    .alpha2 = "PN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_RW = {
    .alpha2 = "RW",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_KN = {
    .alpha2 = "KN",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_LC = {
    .alpha2 = "LC",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_MF = {
    .alpha2 = "MF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_PM = {
    .alpha2 = "PM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_VC = {
    .alpha2 = "VC",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_WS = {
    .alpha2 = "WS",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 24,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SM = {
    .alpha2 = "SM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_ST = {
    .alpha2 = "ST",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_SC = {
    .alpha2 = "SC",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 23, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_SL = {
    .alpha2 = "SL",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_SB = {
    .alpha2 = "SB",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
    },
    .n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_SO = {
    .alpha2 = "SO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
    },
    .n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_TJ = {
    .alpha2 = "TJ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TZ = {
    .alpha2 = "TZ",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TG = {
    .alpha2 = "TG",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TK = {
    .alpha2 = "TK",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_TO = {
    .alpha2 = "TO",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
    },
    .n_reg_rules = 2
};

static const struct ieee80211_regdomain regdom_TM = {
    .alpha2 = "TM",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TC = {
    .alpha2 = "TC",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 23,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_TV = {
    .alpha2 = "TV",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
    },
    .n_reg_rules = 1
};

static const struct ieee80211_regdomain regdom_UM= {
    .alpha2 = "UM",
    .reg_rules = {
        REG_RULE(2402, 2472, 40, 3, 30, 0),
        REG_RULE(5170, 5250, 80, 3, 17,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 3, 23,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 3, 23,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 3, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_VU = {
    .alpha2 = "VU",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 17, 0),
        REG_RULE(5250, 5330, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5730, 80, 0, 24,
            NL80211_RRF_DFS | 0),
        REG_RULE(5735, 5835, 80, 0, 30, 0),
    },
    .n_reg_rules = 5
};

static const struct ieee80211_regdomain regdom_WF = {
    .alpha2 = "WF",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR |
            NL80211_RRF_DFS | 0),
        REG_RULE(5490, 5710, 80, 0, 20,
            NL80211_RRF_DFS | 0),
    },
    .n_reg_rules = 4
};

static const struct ieee80211_regdomain regdom_EH = {
    .alpha2 = "EH",
    .reg_rules = {
        REG_RULE(2402, 2482, 40, 0, 20, 0),
        REG_RULE(5170, 5250, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
        REG_RULE(5250, 5330, 80, 0, 20,
            NL80211_RRF_NO_OUTDOOR | 0),
    },
    .n_reg_rules = 3
};

/* country alpha2 code can search from http://en.wikipedia.org/wiki/ISO_3166-1_alpha-2 */
const struct ieee80211_regdomain *reg_regdb[] = {
    &regdom_AE,
    &regdom_AF,
    &regdom_AG,
    &regdom_AI,
    &regdom_AL,
    &regdom_AM,
    &regdom_AN,
    &regdom_AO,
    &regdom_AR,
    &regdom_AS,
    &regdom_AT,
    &regdom_AU,
    &regdom_AW,
    &regdom_AZ,
    &regdom_BA,
    &regdom_BD,
    &regdom_BE,
    &regdom_BG,
    &regdom_BH,
    &regdom_BM,
    &regdom_BL,
    &regdom_BN,
    &regdom_BO,
    &regdom_BR,
    &regdom_BS,
    &regdom_BY,
    &regdom_BZ,
    &regdom_CA,
    &regdom_CH,
    &regdom_CL,
    &regdom_CN,
    &regdom_CO,
    &regdom_CU,
    &regdom_CR,
    &regdom_CS,
    &regdom_CY,
    &regdom_CZ,
    &regdom_DE,
    &regdom_DK,
    &regdom_DO,
    &regdom_DZ,
    &regdom_EC,
    &regdom_EE,
    &regdom_EG,
    &regdom_ES,
    &regdom_ET,
    &regdom_FI,
    &regdom_FR,
    &regdom_GB,
    &regdom_GD,
    &regdom_GF,
    &regdom_GL,
    &regdom_GU,
    &regdom_GE,
    &regdom_GR,
    &regdom_GT,
    &regdom_HK,
    &regdom_HN,
    &regdom_HR,
    &regdom_HU,
    &regdom_ID,
    &regdom_IE,
    &regdom_IL,
    &regdom_IN,
    &regdom_IQ,
    &regdom_IR,
    &regdom_IS,
    &regdom_IT,
    &regdom_JM,
    &regdom_JO,
    &regdom_JP,
    &regdom_KE,
    &regdom_KH,
    &regdom_KY,
    &regdom_KP,
    &regdom_KR,
    &regdom_KW,
    &regdom_KZ,
    &regdom_LA,
    &regdom_LB,
    &regdom_LI,
    &regdom_LK,
    &regdom_LS,
    &regdom_LT,
    &regdom_LU,
    &regdom_LV,
    &regdom_MA,
    &regdom_MC,
    &regdom_MD,
    &regdom_ME,
    &regdom_MH,
    &regdom_MK,
    &regdom_MN,
    &regdom_MR,
    &regdom_MU,
    &regdom_MV,
    &regdom_MW,
    &regdom_MO,
    &regdom_MT,
    &regdom_MX,
    &regdom_MY,
    &regdom_NG,
    &regdom_NI,
    &regdom_NL,
    &regdom_NO,
    &regdom_NP,
    &regdom_NZ,
    &regdom_OM,
    &regdom_PA,
    &regdom_PE,
    &regdom_PG,
    &regdom_PH,
    &regdom_PK,
    &regdom_PL,
    &regdom_PY,
    &regdom_PR,
    &regdom_PT,
    &regdom_QA,
    &regdom_RO,
    &regdom_RE,
    &regdom_RS,
    &regdom_RU,
    &regdom_SA,
    &regdom_SD,
    &regdom_SN,
    &regdom_SE,
    &regdom_SG,
    &regdom_SI,
    &regdom_SK,
    &regdom_SV,
    &regdom_SY,
    &regdom_TH,
    &regdom_TN,
    &regdom_TR,
    &regdom_TT,
    &regdom_TW,
    &regdom_UA,
    &regdom_US,
    &regdom_UY,
    &regdom_UZ,
    &regdom_UG,
    &regdom_VA,
    &regdom_VI,
    &regdom_VE,
    &regdom_VN,
    &regdom_YE,
    &regdom_YT,
    &regdom_ZA,
    &regdom_ZM,
    &regdom_ZW,
/* 参考broadcom国家码信道规格表，新增的 */    
    &regdom_AD,
    &regdom_BJ,
    &regdom_BT,
    &regdom_BW,
    &regdom_IO,
    &regdom_VG,
    &regdom_BF,
    &regdom_BI,
    &regdom_CM,
    &regdom_CV,
    &regdom_CF,
    &regdom_TD,
    &regdom_CX,
    &regdom_CC,
    &regdom_KM,
    &regdom_CD,
    &regdom_CG,
    &regdom_CK,
    &regdom_CI,
    &regdom_DJ,
    &regdom_DM,
    &regdom_EQ,
    &regdom_ER,
    &regdom_FK,
    &regdom_FO,
    &regdom_FJ,
    &regdom_PF,
    &regdom_TF,
    &regdom_GA,
    &regdom_GM,
    &regdom_GH,
    &regdom_GI,
    &regdom_GP,
    &regdom_GG,
    &regdom_GN,
    &regdom_GW,
    &regdom_GY,
    &regdom_HT,
    &regdom_HM,
    &regdom_JE,
    &regdom_KI,
    &regdom_XK,
    &regdom_KG,
    &regdom_LR,
    &regdom_LY,
    &regdom_MG,
    &regdom_ML,
    &regdom_IM,
    &regdom_MQ,
    &regdom_FM,
    &regdom_MS,
    &regdom_MM,
/*    &regdom_MZ, */
    &regdom_CK,
    &regdom_NA,
    &regdom_NR,
    &regdom_NC,
    &regdom_NE,
    &regdom_NU,
    &regdom_NF,
    &regdom_MP,
    &regdom_PN,
    &regdom_RW,
    &regdom_KN,
    &regdom_LC,
    &regdom_MF,
    &regdom_PM,
    &regdom_VC,
    &regdom_WS,
    &regdom_SM,
    &regdom_ST,
    &regdom_SC,
    &regdom_SL,
    &regdom_SB,
    &regdom_SO,
    &regdom_TJ,
    &regdom_TZ,
    &regdom_TG,
    &regdom_TK,
    &regdom_TO,
    &regdom_TM,
    &regdom_TC,
    &regdom_TV,
    &regdom_UM,
    &regdom_VU,
    &regdom_WF,
    &regdom_EH,
};

int reg_regdb_size = ARRAY_SIZE(reg_regdb);
#endif
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif






