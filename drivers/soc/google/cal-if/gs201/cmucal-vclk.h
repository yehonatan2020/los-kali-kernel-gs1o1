/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
 */

#ifndef __CMUCAL_VCLK_H__
#define __CMUCAL_VCLK_H__

#include "../cmucal.h"

enum vclk_id {

/* DVFS VCLK*/
	VCLK_VDD_INT = DFS_VCLK_TYPE,
	VCLK_VDD_MIF,
	VCLK_VDD_G3D,
	VCLK_VDD_CAM,
	VCLK_VDD_CPUCL0,
	VCLK_VDD_CPUCL1,
	VCLK_VDD_TPU,
	VCLK_VDD_CPUCL2,
	end_of_dfs_vclk,
	num_of_dfs_vclk = end_of_dfs_vclk - DFS_VCLK_TYPE,


/* SPECIAL VCLK*/
	VCLK_MUX_CMU_CMUREF = (MASK_OF_ID & end_of_dfs_vclk) | VCLK_TYPE,
	VCLK_MUX_CPUCL1_CMUREF,
	VCLK_MUX_CPUCL2_CMUREF,
	VCLK_MUX_CLK_HSI0_USB20_REF,
	VCLK_MUX_CLKCMU_HSI0_USBDPDBG,
	VCLK_MUX_MIF_CMUREF,
	VCLK_MUX_NOCL0_CMUREF,
	VCLK_MUX_NOCL1B_CMUREF,
	VCLK_MUX_NOCL2A_CMUREF,
	VCLK_CLKCMU_HSI0_DPGTC,
	VCLK_CLKCMU_TPU_UART,
	VCLK_DIV_CLK_APM_USI0_USI,
	VCLK_DIV_CLK_APM_USI0_UART,
	VCLK_DIV_CLK_APM_USI1_UART,
	VCLK_DIV_CLK_APM_I3C_PMIC,
	VCLK_CLK_AUR_ADD_CH_CLK,
	VCLK_CLKCMU_HPM,
	VCLK_MUX_CLKCMU_CIS_CLK0,
	VCLK_MUX_CLKCMU_CIS_CLK1,
	VCLK_MUX_CLKCMU_CIS_CLK2,
	VCLK_MUX_CLKCMU_CIS_CLK3,
	VCLK_MUX_CLKCMU_CIS_CLK4,
	VCLK_MUX_CLKCMU_CIS_CLK5,
	VCLK_MUX_CLKCMU_CIS_CLK6,
	VCLK_MUX_CLKCMU_CIS_CLK7,
	VCLK_DIV_CLK_CPUCL0_CMUREF,
	VCLK_DIV_CLK_CPUCL1_CMUREF,
	VCLK_DIV_CLK_CPUCL2_CMUREF,
	VCLK_CLK_G3D_ADD_CH_CLK,
	VCLK_DIV_CLK_GSACORE_SPI_FPS,
	VCLK_DIV_CLK_GSACORE_SPI_GSC,
	VCLK_DIV_CLK_GSACORE_UART,
	VCLK_DIV_CLK_SLC_DCLK,
	VCLK_DIV_CLK_SLC1_DCLK,
	VCLK_DIV_CLK_SLC2_DCLK,
	VCLK_DIV_CLK_SLC3_DCLK,
	VCLK_DIV_CLK_PERIC0_USI6_USI,
	VCLK_MUX_CLKCMU_PERIC0_IP,
	VCLK_DIV_CLK_PERIC0_USI3_USI,
	VCLK_DIV_CLK_PERIC0_USI4_USI,
	VCLK_DIV_CLK_PERIC0_USI5_USI,
	VCLK_DIV_CLK_PERIC0_USI14_USI,
	VCLK_DIV_CLK_PERIC0_USI7_USI,
	VCLK_DIV_CLK_PERIC0_USI8_USI,
	VCLK_DIV_CLK_PERIC0_USI1_USI,
	VCLK_DIV_CLK_PERIC0_USI0_UART,
	VCLK_DIV_CLK_PERIC0_USI2_USI,
	VCLK_DIV_CLK_PERIC1_USI11_USI,
	VCLK_MUX_CLKCMU_PERIC1_IP,
	VCLK_DIV_CLK_PERIC1_I3C,
	VCLK_DIV_CLK_PERIC1_USI12_USI,
	VCLK_DIV_CLK_PERIC1_USI0_USI,
	VCLK_DIV_CLK_PERIC1_USI9_USI,
	VCLK_DIV_CLK_PERIC1_USI10_USI,
	VCLK_DIV_CLK_PERIC1_USI13_USI,
	VCLK_DIV_CLK_PERIC1_USI15_USI,
	VCLK_DIV_CLK_PERIC1_USI16_USI,
	end_of_vclk,
	num_of_vclk = end_of_vclk - ((MASK_OF_ID & end_of_dfs_vclk) | VCLK_TYPE),


/* COMMON VCLK*/
	VCLK_BLK_CMU = (MASK_OF_ID & end_of_vclk) | COMMON_VCLK_TYPE,
	VCLK_BLK_HSI0,
	VCLK_BLK_S2D,
	VCLK_BLK_APM,
	VCLK_BLK_CPUCL0,
	VCLK_BLK_CPUCL1,
	VCLK_BLK_CPUCL2,
	VCLK_BLK_EH,
	VCLK_BLK_GSACORE,
	VCLK_BLK_GSACTRL,
	VCLK_BLK_NOCL0,
	VCLK_BLK_NOCL1B,
	VCLK_BLK_AOC,
	VCLK_BLK_AUR,
	VCLK_BLK_BO,
	VCLK_BLK_CSIS,
	VCLK_BLK_DISP,
	VCLK_BLK_DNS,
	VCLK_BLK_DPU,
	VCLK_BLK_G2D,
	VCLK_BLK_G3AA,
	VCLK_BLK_G3D,
	VCLK_BLK_GDC,
	VCLK_BLK_HSI1,
	VCLK_BLK_HSI2,
	VCLK_BLK_IPP,
	VCLK_BLK_ITP,
	VCLK_BLK_MCSC,
	VCLK_BLK_MIF,
	VCLK_BLK_MISC,
	VCLK_BLK_NOCL1A,
	VCLK_BLK_NOCL2A,
	VCLK_BLK_PDP,
	VCLK_BLK_PERIC0,
	VCLK_BLK_PERIC1,
	VCLK_BLK_TNR,
	VCLK_BLK_TPU,
	end_of_common_vclk,
	num_of_common_vclk = end_of_common_vclk - ((MASK_OF_ID & end_of_vclk) | COMMON_VCLK_TYPE),


/* GATE VCLK*/
	VCLK_IP_AOC_CMU_AOC = (MASK_OF_ID & end_of_common_vclk) | GATE_VCLK_TYPE,
	VCLK_IP_BAAW_AOC,
	VCLK_IP_D_TZPC_AOC,
	VCLK_IP_GPC_AOC,
	VCLK_IP_LH_AXI_MI_LD_HSI0_AOC,
	VCLK_IP_LH_AXI_SI_D_AOC,
	VCLK_IP_PPMU_AOC,
	VCLK_IP_PPMU_USB,
	VCLK_IP_SSMT_AOC,
	VCLK_IP_SYSMMU_AOC,
	VCLK_IP_SYSREG_AOC,
	VCLK_IP_UASC_AOC,
	VCLK_IP_XIU_DP_AOC,
	VCLK_IP_XIU_P_AOC,
	VCLK_IP_AOC_SYSCTRL_APB,
	VCLK_IP_LH_AXI_SI_LP0_AOC_CD,
	VCLK_IP_LH_AXI_MI_LP0_AOC_CD,
	VCLK_IP_LH_AXI_SI_LP1_AOC_CD,
	VCLK_IP_LH_AXI_MI_LP1_AOC_CD,
	VCLK_IP_SLH_AXI_SI_LP0_AOC,
	VCLK_IP_SLH_AXI_SI_LP1_AOC,
	VCLK_IP_LH_ATB_SI_LT_AOC,
	VCLK_IP_LH_ATB_MI_LT_AOC_CD,
	VCLK_IP_SLH_AXI_MI_P_AOC,
	VCLK_IP_LH_AXI_SI_P_AOC_CU,
	VCLK_IP_LH_AXI_MI_P_AOC_CU,
	VCLK_IP_SLH_AXI_MI_LG_AOC,
	VCLK_IP_LH_ATB_SI_LT_AOC_CD,
	VCLK_IP_LH_AXI_SI_D_APM,
	VCLK_IP_WDT_APM,
	VCLK_IP_SYSREG_APM,
	VCLK_IP_MAILBOX_APM_AP,
	VCLK_IP_APBIF_PMU_ALIVE,
	VCLK_IP_INTMEM,
	VCLK_IP_PMU_INTR_GEN,
	VCLK_IP_XIU_DP_ALIVE,
	VCLK_IP_APM_CMU_APM,
	VCLK_IP_GREBEINTEGRATION,
	VCLK_IP_APBIF_GPIO_ALIVE,
	VCLK_IP_APBIF_TRTC,
	VCLK_IP_D_TZPC_APM,
	VCLK_IP_MAILBOX_APM_AOC,
	VCLK_IP_MAILBOX_AP_DBGCORE,
	VCLK_IP_APBIF_RTC,
	VCLK_IP_MAILBOX_APM_GSA,
	VCLK_IP_SSMT_D_APM,
	VCLK_IP_SSMT_LG_DBGCORE,
	VCLK_IP_SYSMMU_D_APM,
	VCLK_IP_GPC_APM,
	VCLK_IP_UASC_APM,
	VCLK_IP_UASC_DBGCORE,
	VCLK_IP_UASC_P_ALIVE,
	VCLK_IP_UASC_LP0_AOC,
	VCLK_IP_APBIF_GPIO_FAR_ALIVE,
	VCLK_IP_ROM_CRC32_HOST,
	VCLK_IP_SS_DBGCORE,
	VCLK_IP_MAILBOX_APM_SWD,
	VCLK_IP_MAILBOX_APM_TPU,
	VCLK_IP_LH_AXI_MI_IG_SWD,
	VCLK_IP_UASC_IG_SWD,
	VCLK_IP_APM_USI0_UART,
	VCLK_IP_APM_USI1_UART,
	VCLK_IP_APM_USI0_USI,
	VCLK_IP_MAILBOX_AP_AOCA32,
	VCLK_IP_MAILBOX_AP_AOCF1,
	VCLK_IP_MAILBOX_AP_AOCP6,
	VCLK_IP_MAILBOX_AP_AUR0,
	VCLK_IP_MAILBOX_AP_AUR1,
	VCLK_IP_MAILBOX_AP_AUR2,
	VCLK_IP_MAILBOX_AP_AUR3,
	VCLK_IP_APM_I3C_PMIC,
	VCLK_IP_APBIF_INTCOMB_VGPIO2PMU,
	VCLK_IP_APBIF_INTCOMB_VGPIO2AP,
	VCLK_IP_APBIF_INTCOMB_VGPIO2APM,
	VCLK_IP_MAILBOX_APM_AUR,
	VCLK_IP_SLH_AXI_SI_LG_DBGCORE,
	VCLK_IP_SLH_AXI_SI_LG_SCAN2DRAM,
	VCLK_IP_SLH_AXI_MI_P_ALIVE,
	VCLK_IP_SLH_AXI_MI_LP0_AOC,
	VCLK_IP_LH_AXI_SI_LG_DBGCORE_CD,
	VCLK_IP_LH_AXI_MI_LG_DBGCORE_CD,
	VCLK_IP_LH_AXI_SI_LG_SCAN2DRAM_CD,
	VCLK_IP_LH_AXI_MI_LG_SCAN2DRAM_CD,
	VCLK_IP_LH_AXI_SI_LP0_AOC_CU,
	VCLK_IP_LH_AXI_MI_LP0_AOC_CU,
	VCLK_IP_LH_AXI_SI_P_ALIVE_CU,
	VCLK_IP_LH_AXI_MI_P_ALIVE_CU,
	VCLK_IP_AUR_CMU_AUR,
	VCLK_IP_AUR,
	VCLK_IP_AS_APB_SYSMMU_S1_NS_AUR0,
	VCLK_IP_D_TZPC_AUR,
	VCLK_IP_GPC_AUR,
	VCLK_IP_LH_AXI_SI_D0_AUR,
	VCLK_IP_SSMT_D0_AUR,
	VCLK_IP_SSMT_D1_AUR,
	VCLK_IP_PPMU_D0_AUR,
	VCLK_IP_PPMU_D1_AUR,
	VCLK_IP_SYSMMU_D0_AUR_WP,
	VCLK_IP_SYSMMU_D1_AUR_WP,
	VCLK_IP_SYSREG_AUR,
	VCLK_IP_UASC_AUR,
	VCLK_IP_LH_AXI_SI_D1_AUR,
	VCLK_IP_AS_APBM_G_AUR,
	VCLK_IP_ADD_APBIF_AUR,
	VCLK_IP_BAAW_AUR,
	VCLK_IP_LH_ATB_SI_LT_AUR_CPUCL0,
	VCLK_IP_LH_ATB_SI_LT_AUR_CPUCL0_CD,
	VCLK_IP_LH_ATB_MI_LT_AUR_CPUCL0_CD,
	VCLK_IP_LH_AXI_SI_P_AUR_CU,
	VCLK_IP_SLH_AXI_MI_P_AUR,
	VCLK_IP_LH_AXI_MI_P_AUR_CU,
	VCLK_IP_BO_CMU_BO,
	VCLK_IP_LH_AXI_SI_D_BO,
	VCLK_IP_SLH_AXI_MI_P_BO,
	VCLK_IP_PPMU_BO,
	VCLK_IP_SYSMMU_BO,
	VCLK_IP_AS_APB_SYSMMU_S1_NS_BO,
	VCLK_IP_SYSREG_BO,
	VCLK_IP_SSMT_BO,
	VCLK_IP_D_TZPC_BO,
	VCLK_IP_GPC_BO,
	VCLK_IP_UASC_BO,
	VCLK_IP_BO,
	VCLK_IP_LH_AXI_SI_IP_BO,
	VCLK_IP_LH_AXI_MI_IP_BO,
	VCLK_IP_SYSREG_CPUCL0,
	VCLK_IP_HPM_APBIF_CPUCL0,
	VCLK_IP_CSSYS,
	VCLK_IP_LH_ATB_MI_IT0_CLUSTER0,
	VCLK_IP_LH_ATB_MI_IT6_CLUSTER0,
	VCLK_IP_LH_ATB_MI_IT1_CLUSTER0,
	VCLK_IP_LH_ATB_MI_IT7_CLUSTER0,
	VCLK_IP_LH_ATB_MI_IT2_CLUSTER0,
	VCLK_IP_LH_ATB_MI_IT3_CLUSTER0,
	VCLK_IP_LH_ACE_SI_D0_CPUCL0,
	VCLK_IP_LH_ATB_SI_IT0_CLUSTER0,
	VCLK_IP_LH_ATB_SI_IT1_CLUSTER0,
	VCLK_IP_LH_ATB_SI_IT2_CLUSTER0,
	VCLK_IP_LH_ATB_SI_IT3_CLUSTER0,
	VCLK_IP_ADM_APB_G_CLUSTER0,
	VCLK_IP_CPUCL0_CMU_CPUCL0,
	VCLK_IP_CLUSTER0,
	VCLK_IP_LH_ATB_MI_IT4_CLUSTER0,
	VCLK_IP_LH_ATB_MI_IT5_CLUSTER0,
	VCLK_IP_LH_ACE_SI_D1_CPUCL0,
	VCLK_IP_LH_ATB_SI_IT4_CLUSTER0,
	VCLK_IP_LH_ATB_SI_IT5_CLUSTER0,
	VCLK_IP_D_TZPC_CPUCL0,
	VCLK_IP_LH_AXI_SI_IG_CSSYS,
	VCLK_IP_LH_AXI_MI_IG_CSSYS,
	VCLK_IP_XIU_P_CPUCL0,
	VCLK_IP_HPM_CPUCL0_1,
	VCLK_IP_HPM_CPUCL0_0,
	VCLK_IP_APB_ASYNC_P_CSSYS_0,
	VCLK_IP_BPS_CPUCL0,
	VCLK_IP_LH_ATB_SI_IT6_CLUSTER0,
	VCLK_IP_GPC_CPUCL0,
	VCLK_IP_LH_AXI_SI_IG_DBGCORE,
	VCLK_IP_XIU_DP_CSSYS,
	VCLK_IP_LH_AXI_MI_IG_DBGCORE,
	VCLK_IP_SSMT_CPUCL0,
	VCLK_IP_SYSMMU_S2_CPUCL0,
	VCLK_IP_LH_AXI_MI_IG_HSI0,
	VCLK_IP_APB_ASYNC_P_SYSMMU,
	VCLK_IP_LH_AXI_SI_IG_HSI0,
	VCLK_IP_LH_AXI_SI_IG_STM,
	VCLK_IP_LH_ATB_SI_IT7_CLUSTER0,
	VCLK_IP_LH_AXI_MI_IG_STM,
	VCLK_IP_SLH_AXI_SI_G_CSSYS,
	VCLK_IP_LH_AXI_SI_G_CSSYS_CD,
	VCLK_IP_LH_AXI_MI_G_CSSYS_CD,
	VCLK_IP_LH_AST_SI_L_ICC_CLUSTER0_GIC,
	VCLK_IP_LH_AST_SI_L_ICC_CLUSTER0_GIC_CD,
	VCLK_IP_LH_AST_MI_L_ICC_CLUSTER0_GIC_CD,
	VCLK_IP_SLH_AXI_SI_LG_ETR_HSI0,
	VCLK_IP_LH_AXI_SI_LG_ETR_HSI0_CD,
	VCLK_IP_LH_AXI_MI_LG_ETR_HSI0_CD,
	VCLK_IP_LH_AST_MI_L_IRI_GIC_CLUSTER0,
	VCLK_IP_LH_AST_SI_L_IRI_GIC_CLUSTER0_CU,
	VCLK_IP_LH_AST_MI_L_IRI_GIC_CLUSTER0_CU,
	VCLK_IP_SLH_AXI_MI_LG_DBGCORE,
	VCLK_IP_LH_AXI_SI_LG_DBGCORE_CU,
	VCLK_IP_LH_AXI_MI_LG_DBGCORE_CU,
	VCLK_IP_LH_ATB_MI_LT_AOC,
	VCLK_IP_LH_ATB_SI_LT_AOC_CU,
	VCLK_IP_LH_ATB_MI_LT_AOC_CU,
	VCLK_IP_LH_ATB_MI_LT_AUR_CPUCL0,
	VCLK_IP_LH_ATB_SI_LT_AUR_CPUCL0_CU,
	VCLK_IP_LH_ATB_MI_LT_AUR_CPUCL0_CU,
	VCLK_IP_LH_ATB_MI_LT_GSA_CPUCL0,
	VCLK_IP_LH_ATB_SI_LT_GSA_CPUCL0_CU,
	VCLK_IP_LH_ATB_MI_LT_GSA_CPUCL0_CU,
	VCLK_IP_SLH_AXI_MI_P_CPUCL0,
	VCLK_IP_LH_AXI_SI_P_CPUCL0_CU,
	VCLK_IP_LH_AXI_MI_P_CPUCL0_CU,
	VCLK_IP_LH_ATB_MI_LT0_TPU_CPUCL0,
	VCLK_IP_LH_ATB_MI_LT1_TPU_CPUCL0,
	VCLK_IP_LH_ATB_SI_LT0_TPU_CPUCL0_CU,
	VCLK_IP_LH_ATB_MI_LT0_TPU_CPUCL0_CU,
	VCLK_IP_LH_ATB_SI_LT1_TPU_CPUCL0_CU,
	VCLK_IP_LH_ATB_MI_LT1_TPU_CPUCL0_CU,
	VCLK_IP_LH_ATB_MI_T_BDU,
	VCLK_IP_LH_ATB_MI_T_SLC,
	VCLK_IP_LH_ATB_SI_T_BDU_CU,
	VCLK_IP_LH_ATB_MI_T_BDU_CU,
	VCLK_IP_LH_ATB_SI_T_SLC_CU,
	VCLK_IP_LH_ATB_MI_T_SLC_CU,
	VCLK_IP_CPUCL0_CON,
	VCLK_IP_CPUCL1,
	VCLK_IP_CPUCL1_CMU_CPUCL1,
	VCLK_IP_DD_APBIF0_CPUCL0,
	VCLK_IP_CPUCL2_CMU_CPUCL2,
	VCLK_IP_CMU_CPUCL2_SHORTSTOP,
	VCLK_IP_CPUCL2,
	VCLK_IP_DD_APBIF2_CPUCL0,
	VCLK_IP_LH_AXI_SI_D0_CSIS,
	VCLK_IP_SLH_AXI_MI_P_CSIS,
	VCLK_IP_SYSREG_CSIS,
	VCLK_IP_CSIS_CMU_CSIS,
	VCLK_IP_LH_AST_MI_L_ZOTF2_IPP_CSIS,
	VCLK_IP_MIPI_PHY_LINK_WRAP,
	VCLK_IP_D_TZPC_CSIS,
	VCLK_IP_LH_AST_MI_L_ZOTF1_IPP_CSIS,
	VCLK_IP_PPMU_D0,
	VCLK_IP_LH_AST_MI_L_ZOTF0_IPP_CSIS,
	VCLK_IP_LH_AST_MI_L_SOTF0_IPP_CSIS,
	VCLK_IP_LH_AST_MI_L_SOTF1_IPP_CSIS,
	VCLK_IP_LH_AST_MI_L_SOTF2_IPP_CSIS,
	VCLK_IP_LH_AST_SI_L_OTF0_CSIS_PDP,
	VCLK_IP_LH_AST_SI_L_OTF1_CSIS_PDP,
	VCLK_IP_LH_AST_SI_L_OTF2_CSIS_PDP,
	VCLK_IP_GPC_CSIS,
	VCLK_IP_AD_APB_CSIS0,
	VCLK_IP_PPMU_D1,
	VCLK_IP_SYSMMU_D0_CSIS,
	VCLK_IP_SYSMMU_D1_CSIS,
	VCLK_IP_SSMT_D1,
	VCLK_IP_SSMT_D0,
	VCLK_IP_QE_ZSL1,
	VCLK_IP_QE_ZSL2,
	VCLK_IP_QE_ZSL0,
	VCLK_IP_QE_STRP0,
	VCLK_IP_XIU_D0_CSIS,
	VCLK_IP_XIU_D1_CSIS,
	VCLK_IP_LH_AST_MI_L_VO_MCSC_CSIS,
	VCLK_IP_LH_AXI_SI_D1_CSIS,
	VCLK_IP_LH_AST_MI_L_OTF0_PDP_CSIS,
	VCLK_IP_LH_AST_MI_L_OTF1_PDP_CSIS,
	VCLK_IP_LH_AST_MI_L_OTF2_PDP_CSIS,
	VCLK_IP_LH_AST_SI_L_VO_CSIS_PDP,
	VCLK_IP_LH_AXI_MI_LD_PDP_CSIS,
	VCLK_IP_QE_STRP2,
	VCLK_IP_QE_STRP1,
	VCLK_IP_XIU_D2_CSIS,
	VCLK_IP_CSISX8,
	VCLK_IP_QE_CSIS_DMA0,
	VCLK_IP_QE_CSIS_DMA1,
	VCLK_IP_QE_CSIS_DMA2,
	VCLK_IP_QE_CSIS_DMA3,
	VCLK_IP_DISP_CMU_DISP,
	VCLK_IP_AD_APB_DECON_MAIN,
	VCLK_IP_DPUB,
	VCLK_IP_SLH_AXI_MI_P_DISP,
	VCLK_IP_D_TZPC_DISP,
	VCLK_IP_GPC_DISP,
	VCLK_IP_SYSREG_DISP,
	VCLK_IP_AD_APB_DNS,
	VCLK_IP_D_TZPC_DNS,
	VCLK_IP_DNS,
	VCLK_IP_GPC_DNS,
	VCLK_IP_SLH_AXI_MI_P_DNS,
	VCLK_IP_LH_AXI_SI_D_DNS,
	VCLK_IP_PPMU_D0_DNS,
	VCLK_IP_SSMT_D0_DNS,
	VCLK_IP_SYSMMU_DNS,
	VCLK_IP_SYSREG_DNS,
	VCLK_IP_LH_AST_SI_L_OTF0_DNS_ITP,
	VCLK_IP_LH_AST_SI_L_OTF1_DNS_ITP,
	VCLK_IP_LH_AST_SI_L_OTF0_DNS_MCSC,
	VCLK_IP_LH_AST_SI_L_OTF1_DNS_MCSC,
	VCLK_IP_LH_AST_SI_L_OTF2_DNS_MCSC,
	VCLK_IP_LH_AST_MI_L_OTF_ITP_DNS,
	VCLK_IP_LH_AST_SI_L_OTF_DNS_GDC,
	VCLK_IP_LH_AST_MI_L_VO_IPP_DNS,
	VCLK_IP_LH_AST_SI_L_VO_DNS_TNR,
	VCLK_IP_LH_AXI_MI_LD_PDP_DNS,
	VCLK_IP_XIU_D_DNS,
	VCLK_IP_LH_AXI_MI_LD_IPP_DNS,
	VCLK_IP_LH_AXI_MI_LD_MCSC_DNS,
	VCLK_IP_QE_D0_DNS,
	VCLK_IP_LH_AST_MI_L_OTF_IPP_DNS,
	VCLK_IP_DNS_CMU_DNS,
	VCLK_IP_SSMT_D1_DNS,
	VCLK_IP_PPMU_D1_DNS,
	VCLK_IP_QE_D1_DNS,
	VCLK_IP_LH_AXI_MI_LD_ITP_DNS,
	VCLK_IP_DPU_CMU_DPU,
	VCLK_IP_SYSREG_DPU,
	VCLK_IP_SYSMMU_DPUD0,
	VCLK_IP_SLH_AXI_MI_P_DPU,
	VCLK_IP_LH_AXI_SI_D1_DPU,
	VCLK_IP_LH_AXI_SI_D2_DPU,
	VCLK_IP_SYSMMU_DPUD2,
	VCLK_IP_SYSMMU_DPUD1,
	VCLK_IP_PPMU_DPUD0,
	VCLK_IP_PPMU_DPUD1,
	VCLK_IP_PPMU_DPUD2,
	VCLK_IP_LH_AXI_SI_D0_DPU,
	VCLK_IP_DPUF,
	VCLK_IP_D_TZPC_DPU,
	VCLK_IP_AD_APB_DPU_DMA,
	VCLK_IP_SSMT_DPU0,
	VCLK_IP_SSMT_DPU1,
	VCLK_IP_SSMT_DPU2,
	VCLK_IP_GPC_DPU,
	VCLK_IP_EH_CMU_EH,
	VCLK_IP_AS_P_SYSMMU_S2_EH,
	VCLK_IP_D_TZPC_EH,
	VCLK_IP_GPC_EH,
	VCLK_IP_LH_AXI_MI_P_EH_CU,
	VCLK_IP_LH_ACEL_SI_D_EH,
	VCLK_IP_EH,
	VCLK_IP_SSMT_EH,
	VCLK_IP_PPMU_EH,
	VCLK_IP_SYSMMU_EH,
	VCLK_IP_SYSREG_EH,
	VCLK_IP_UASC_EH,
	VCLK_IP_QE_EH,
	VCLK_IP_SLH_AXI_MI_P_EH,
	VCLK_IP_LH_AXI_SI_P_EH_CU,
	VCLK_IP_LH_AXI_SI_IP_EH,
	VCLK_IP_LH_AXI_MI_IP_EH,
	VCLK_IP_G2D_CMU_G2D,
	VCLK_IP_PPMU_D0_G2D,
	VCLK_IP_PPMU_D1_G2D,
	VCLK_IP_SYSMMU_D0_G2D,
	VCLK_IP_SYSREG_G2D,
	VCLK_IP_LH_AXI_SI_D0_G2D,
	VCLK_IP_LH_AXI_SI_D1_G2D,
	VCLK_IP_SYSMMU_D2_G2D,
	VCLK_IP_PPMU_D2_G2D,
	VCLK_IP_LH_ACEL_SI_D2_G2D,
	VCLK_IP_SSMT_D0_G2D,
	VCLK_IP_G2D,
	VCLK_IP_SYSMMU_D1_G2D,
	VCLK_IP_JPEG,
	VCLK_IP_D_TZPC_G2D,
	VCLK_IP_SSMT_D1_G2D,
	VCLK_IP_SSMT_D2_G2D,
	VCLK_IP_GPC_G2D,
	VCLK_IP_SLH_AXI_MI_P_G2D,
	VCLK_IP_AS_APB_G2D,
	VCLK_IP_AS_APB_JPEG,
	VCLK_IP_LH_AXI_SI_D_G3AA,
	VCLK_IP_APB_ASYNC_TOP_G3AA,
	VCLK_IP_SYSREG_G3AA,
	VCLK_IP_G3AA_CMU_G3AA,
	VCLK_IP_PPMU_G3AA,
	VCLK_IP_D_TZPC_G3AA,
	VCLK_IP_GPC_G3AA,
	VCLK_IP_G3AA,
	VCLK_IP_SSMT_G3AA,
	VCLK_IP_SYSMMU_G3AA,
	VCLK_IP_LH_AST_MI_L_OTF0_PDP_G3AA,
	VCLK_IP_LH_AST_MI_L_YOTF0_PDP_G3AA,
	VCLK_IP_LH_AST_MI_L_OTF1_PDP_G3AA,
	VCLK_IP_LH_AST_MI_L_OTF2_PDP_G3AA,
	VCLK_IP_LH_AST_MI_L_YOTF1_PDP_G3AA,
	VCLK_IP_SLH_AXI_MI_P_G3AA,
	VCLK_IP_LH_AXI_MI_P_G3D_CU,
	VCLK_IP_BUSIF_HPMG3D,
	VCLK_IP_HPM_G3D,
	VCLK_IP_SYSREG_G3D,
	VCLK_IP_G3D_CMU_G3D,
	VCLK_IP_LH_AXI_SI_IP_G3D,
	VCLK_IP_GPU,
	VCLK_IP_LH_AXI_MI_IP_G3D,
	VCLK_IP_GRAY2BIN_G3D,
	VCLK_IP_D_TZPC_G3D,
	VCLK_IP_GPC_G3D,
	VCLK_IP_UASC_G3D,
	VCLK_IP_ADD_APBIF_G3D,
	VCLK_IP_ADD_G3D,
	VCLK_IP_ASB_G3D,
	VCLK_IP_SLH_AXI_MI_P_G3D,
	VCLK_IP_LH_AXI_SI_P_G3D_CU,
	VCLK_IP_ADM_AHB_G_GPU,
	VCLK_IP_GDC_CMU_GDC,
	VCLK_IP_AD_APB_GDC0,
	VCLK_IP_AD_APB_GDC1,
	VCLK_IP_AD_APB_SCSC,
	VCLK_IP_D_TZPC_GDC,
	VCLK_IP_GDC0,
	VCLK_IP_GDC1,
	VCLK_IP_GPC_GDC,
	VCLK_IP_LH_AXI_SI_D2_GDC,
	VCLK_IP_PPMU_D0_GDC,
	VCLK_IP_PPMU_D1_GDC,
	VCLK_IP_SCSC,
	VCLK_IP_SSMT_D0_GDC,
	VCLK_IP_SSMT_D1_GDC,
	VCLK_IP_SSMT_D0_SCSC,
	VCLK_IP_SYSMMU_D2_GDC,
	VCLK_IP_SYSREG_GDC,
	VCLK_IP_LH_AST_MI_I_GDC0_GDC1,
	VCLK_IP_LH_AST_MI_I_GDC1_SCSC,
	VCLK_IP_LH_AST_MI_L_OTF_DNS_GDC,
	VCLK_IP_LH_AST_MI_L_OTF_TNR_GDC,
	VCLK_IP_LH_AST_MI_L_VO_TNR_GDC,
	VCLK_IP_LH_AST_SI_I_GDC0_GDC1,
	VCLK_IP_LH_AST_SI_I_GDC1_SCSC,
	VCLK_IP_LH_AST_SI_L_VO_GDC_MCSC,
	VCLK_IP_SYSMMU_D0_GDC,
	VCLK_IP_SYSMMU_D1_GDC,
	VCLK_IP_LH_AXI_SI_D0_GDC,
	VCLK_IP_PPMU_D0_SCSC,
	VCLK_IP_XIU_D2_GDC,
	VCLK_IP_QE_D1_SCSC,
	VCLK_IP_QE_D0_SCSC,
	VCLK_IP_SLH_AXI_MI_P_GDC,
	VCLK_IP_LH_AXI_SI_D1_GDC,
	VCLK_IP_XIU_D0_GDC,
	VCLK_IP_XIU_D1_GDC,
	VCLK_IP_PPMU_D2_GDC,
	VCLK_IP_PPMU_D3_GDC,
	VCLK_IP_PPMU_D1_SCSC,
	VCLK_IP_PPMU_D2_SCSC,
	VCLK_IP_SSMT_D2_GDC,
	VCLK_IP_SSMT_D3_GDC,
	VCLK_IP_SSMT_D1_SCSC,
	VCLK_IP_SSMT_D2_SCSC,
	VCLK_IP_QE_D0_GDC,
	VCLK_IP_QE_D1_GDC,
	VCLK_IP_QE_D2_GDC,
	VCLK_IP_QE_D2_SCSC,
	VCLK_IP_QE_D3_GDC,
	VCLK_IP_LH_AXI_MI_ID_SCSC_GDC1,
	VCLK_IP_LH_AXI_SI_ID_SCSC_GDC1,
	VCLK_IP_GSACORE_CMU_GSACORE,
	VCLK_IP_CA32_GSACORE,
	VCLK_IP_GPIO_GSACORE,
	VCLK_IP_KDN_GSACORE,
	VCLK_IP_OTP_CON_GSACORE,
	VCLK_IP_PPMU_GSACORE,
	VCLK_IP_QE_CA32_GSACORE,
	VCLK_IP_QE_DMA_GSACORE,
	VCLK_IP_QE_SSS_GSACORE,
	VCLK_IP_RESETMON_GSACORE,
	VCLK_IP_SPI_FPS_GSACORE,
	VCLK_IP_SPI_GSC_GSACORE,
	VCLK_IP_SSMT_GSACORE,
	VCLK_IP_SSS_GSACORE,
	VCLK_IP_SYSREG_GSACORE,
	VCLK_IP_UART_GSACORE,
	VCLK_IP_WDT_GSACORE,
	VCLK_IP_BAAW_GSACORE,
	VCLK_IP_INTMEM_GSACORE,
	VCLK_IP_LH_AXI_SI_D_GSA,
	VCLK_IP_LH_AXI_SI_IP_GSA,
	VCLK_IP_DMA_GSACORE,
	VCLK_IP_SYSMMU_GSACORE,
	VCLK_IP_AD_APB_DMA_GSACORE_NS,
	VCLK_IP_PUF_GSACORE,
	VCLK_IP_XIU_DP0_GSA_WP,
	VCLK_IP_LH_AXI_MI_I_DAP_GSA,
	VCLK_IP_UGME,
	VCLK_IP_LH_AST_MI_I_CA32_GIC,
	VCLK_IP_LH_AST_MI_I_GIC_CA32,
	VCLK_IP_UDAP_SSS_AHB_ASYNC,
	VCLK_IP_AD_APB_SYSMMU_GSACORE_NS,
	VCLK_IP_GIC_GSACORE,
	VCLK_IP_LH_AST_SI_I_GIC_CA32,
	VCLK_IP_LH_AST_SI_I_CA32_GIC,
	VCLK_IP_LH_ATB_SI_LT_GSA_CPUCL0_CD,
	VCLK_IP_LH_ATB_SI_LT_GSA_CPUCL0,
	VCLK_IP_LH_ATB_MI_LT_GSA_CPUCL0_CD,
	VCLK_IP_LH_AXI_SI_IP_AXI2APB1_GSACORE,
	VCLK_IP_LH_AXI_MI_IP_AXI2APB1_GSACORE,
	VCLK_IP_LH_AXI_SI_IP_AXI2APB2_GSACORE,
	VCLK_IP_LH_AXI_MI_IP_AXI2APB2_GSACORE,
	VCLK_IP_LH_AXI_SI_IP_GME,
	VCLK_IP_LH_AXI_MI_IP_GME,
	VCLK_IP_AD_APB_INTMEM_GSACORE,
	VCLK_IP_GSACTRL_CMU_GSACTRL,
	VCLK_IP_GPC_GSACTRL,
	VCLK_IP_MAILBOX_GSA2AOC,
	VCLK_IP_MAILBOX_GSA2NONTZ,
	VCLK_IP_MAILBOX_GSA2TPU,
	VCLK_IP_MAILBOX_GSA2AUR,
	VCLK_IP_SYSREG_GSACTRL,
	VCLK_IP_TZPC_GSACTRL,
	VCLK_IP_INTMEM_GSACTRL,
	VCLK_IP_LH_AXI_MI_IP_GSA,
	VCLK_IP_MAILBOX_GSA2TZ,
	VCLK_IP_PMU_GSA,
	VCLK_IP_APBIF_GPIO_GSACTRL,
	VCLK_IP_TIMER_GSACTRL,
	VCLK_IP_DAP_GSACTRL,
	VCLK_IP_LH_AXI_MI_P_GSA_CU,
	VCLK_IP_SYSREG_GSACTRLEXT,
	VCLK_IP_SECJTAG_GSACTRL,
	VCLK_IP_LH_AXI_SI_I_DAP_GSA,
	VCLK_IP_AD_APB_INTMEM_GSACTRL,
	VCLK_IP_SLH_AXI_MI_P_GSA,
	VCLK_IP_LH_AXI_SI_P_GSA_CU,
	VCLK_IP_LH_AXI_SI_IP_AXI2APB0_GSACTRL,
	VCLK_IP_LH_AXI_MI_IP_AXI2APB0_GSACTRL,
	VCLK_IP_XIU_DP1_GSA_WP,
	VCLK_IP_HSI0_CMU_HSI0,
	VCLK_IP_USB31DRD,
	VCLK_IP_DP_LINK,
	VCLK_IP_XIU_D0_HSI0,
	VCLK_IP_ETR_MIU,
	VCLK_IP_PPMU_HSI0_NOCL1B,
	VCLK_IP_PPMU_HSI0_AOC,
	VCLK_IP_LH_AXI_SI_LD_HSI0_AOC,
	VCLK_IP_LH_ACEL_SI_D_HSI0,
	VCLK_IP_GPC_HSI0,
	VCLK_IP_D_TZPC_HSI0,
	VCLK_IP_SSMT_USB,
	VCLK_IP_SYSMMU_USB,
	VCLK_IP_SYSREG_HSI0,
	VCLK_IP_XIU_P_HSI0,
	VCLK_IP_XIU_D1_HSI0,
	VCLK_IP_UASC_HSI0_CTRL,
	VCLK_IP_UASC_HSI0_LINK,
	VCLK_IP_SLH_AXI_MI_LG_ETR_HSI0,
	VCLK_IP_SLH_AXI_MI_LP1_AOC,
	VCLK_IP_SLH_AXI_MI_P_HSI0,
	VCLK_IP_LH_AXI_SI_LG_ETR_HSI0_CU,
	VCLK_IP_LH_AXI_MI_LG_ETR_HSI0_CU,
	VCLK_IP_LH_AXI_SI_LP1_AOC_CU,
	VCLK_IP_LH_AXI_MI_LP1_AOC_CU,
	VCLK_IP_LH_AXI_SI_P_HSI0_CU,
	VCLK_IP_LH_AXI_MI_P_HSI0_CU,
	VCLK_IP_HSI1_CMU_HSI1,
	VCLK_IP_LH_ACEL_SI_D_HSI1,
	VCLK_IP_LH_AXI_MI_P_HSI1_CU,
	VCLK_IP_SYSREG_HSI1,
	VCLK_IP_XIU_D_HSI1,
	VCLK_IP_PPMU_HSI1,
	VCLK_IP_SYSMMU_HSI1,
	VCLK_IP_XIU_P_HSI1,
	VCLK_IP_PCIE_GEN4_0,
	VCLK_IP_PCIE_IA_GEN4A_0,
	VCLK_IP_PCIE_IA_GEN4B_0,
	VCLK_IP_D_TZPC_HSI1,
	VCLK_IP_GPC_HSI1,
	VCLK_IP_SSMT_HSI1,
	VCLK_IP_GPIO_HSI1,
	VCLK_IP_QE_PCIE_GEN4A_HSI1,
	VCLK_IP_QE_PCIE_GEN4B_HSI1,
	VCLK_IP_UASC_PCIE_GEN4A_DBI_0,
	VCLK_IP_UASC_PCIE_GEN4A_SLV_0,
	VCLK_IP_UASC_PCIE_GEN4B_DBI_0,
	VCLK_IP_UASC_PCIE_GEN4B_SLV_0,
	VCLK_IP_SSMT_PCIE_IA_GEN4A_0,
	VCLK_IP_SSMT_PCIE_IA_GEN4B_0,
	VCLK_IP_AS_APB_PCIEPHY_HSI1,
	VCLK_IP_SLH_AXI_MI_P_HSI1,
	VCLK_IP_LH_AXI_SI_P_HSI1_CU,
	VCLK_IP_HSI2_CMU_HSI2,
	VCLK_IP_SYSREG_HSI2,
	VCLK_IP_GPIO_HSI2,
	VCLK_IP_LH_ACEL_SI_D_HSI2,
	VCLK_IP_LH_AXI_MI_P_HSI2_CU,
	VCLK_IP_XIU_D_HSI2,
	VCLK_IP_XIU_P_HSI2,
	VCLK_IP_PPMU_HSI2,
	VCLK_IP_PCIE_GEN4_1,
	VCLK_IP_SYSMMU_HSI2,
	VCLK_IP_SSMT_HSI2,
	VCLK_IP_PCIE_IA_GEN4A_1,
	VCLK_IP_D_TZPC_HSI2,
	VCLK_IP_UFS_EMBD,
	VCLK_IP_PCIE_IA_GEN4B_1,
	VCLK_IP_GPC_HSI2,
	VCLK_IP_MMC_CARD,
	VCLK_IP_QE_PCIE_GEN4A_HSI2,
	VCLK_IP_QE_PCIE_GEN4B_HSI2,
	VCLK_IP_QE_UFS_EMBD_HSI2,
	VCLK_IP_UASC_PCIE_GEN4A_DBI_1,
	VCLK_IP_UASC_PCIE_GEN4A_SLV_1,
	VCLK_IP_UASC_PCIE_GEN4B_DBI_1,
	VCLK_IP_UASC_PCIE_GEN4B_SLV_1,
	VCLK_IP_QE_MMC_CARD_HSI2,
	VCLK_IP_SSMT_PCIE_IA_GEN4A_1,
	VCLK_IP_SSMT_PCIE_IA_GEN4B_1,
	VCLK_IP_AS_APB_PCIEPHY_HSI2,
	VCLK_IP_GPIO_HSI2UFS,
	VCLK_IP_SLH_AXI_MI_P_HSI2,
	VCLK_IP_LH_AXI_SI_P_HSI2_CU,
	VCLK_IP_IPP_CMU_IPP,
	VCLK_IP_D_TZPC_IPP,
	VCLK_IP_SLH_AXI_MI_P_IPP,
	VCLK_IP_SYSREG_IPP,
	VCLK_IP_LH_AST_SI_L_VO_IPP_DNS,
	VCLK_IP_LH_AST_MI_L_VO_PDP_IPP,
	VCLK_IP_AD_APB_IPP,
	VCLK_IP_LH_AXI_SI_D_IPP,
	VCLK_IP_LH_AST_SI_L_SOTF0_IPP_CSIS,
	VCLK_IP_LH_AST_SI_L_SOTF1_IPP_CSIS,
	VCLK_IP_LH_AST_SI_L_SOTF2_IPP_CSIS,
	VCLK_IP_LH_AST_SI_L_ZOTF0_IPP_CSIS,
	VCLK_IP_LH_AST_SI_L_ZOTF1_IPP_CSIS,
	VCLK_IP_LH_AST_SI_L_ZOTF2_IPP_CSIS,
	VCLK_IP_PPMU_IPP,
	VCLK_IP_SIPU_IPP,
	VCLK_IP_SYSMMU_IPP,
	VCLK_IP_GPC_IPP,
	VCLK_IP_SSMT_THSTAT,
	VCLK_IP_LH_AXI_SI_LD_IPP_DNS,
	VCLK_IP_PPMU_MSA,
	VCLK_IP_QE_ALIGN0,
	VCLK_IP_QE_ALIGN1,
	VCLK_IP_SSMT_ALIGN0,
	VCLK_IP_SSMT_ALIGN1,
	VCLK_IP_XIU_D1_IPP,
	VCLK_IP_TNR_A,
	VCLK_IP_QE_THSTAT,
	VCLK_IP_LH_AST_MI_L_OTF0_PDP_IPP,
	VCLK_IP_LH_AST_MI_L_OTF1_PDP_IPP,
	VCLK_IP_LH_AST_MI_L_OTF2_PDP_IPP,
	VCLK_IP_LH_AST_SI_L_OTF_IPP_DNS,
	VCLK_IP_XIU_D2_IPP,
	VCLK_IP_XIU_D0_IPP,
	VCLK_IP_SSMT_FDPIG,
	VCLK_IP_SSMT_RGBH0,
	VCLK_IP_SSMT_RGBH1,
	VCLK_IP_SSMT_RGBH2,
	VCLK_IP_SSMT_ALIGN2,
	VCLK_IP_SSMT_ALIGN3,
	VCLK_IP_QE_FDPIG,
	VCLK_IP_QE_RGBH0,
	VCLK_IP_QE_RGBH1,
	VCLK_IP_QE_RGBH2,
	VCLK_IP_QE_ALIGN2,
	VCLK_IP_QE_ALIGN3,
	VCLK_IP_SSMT_TNR_MSA0,
	VCLK_IP_SSMT_ALN_STAT,
	VCLK_IP_QE_TNR_MSA0,
	VCLK_IP_QE_ALN_STAT,
	VCLK_IP_SSMT_TNR_MSA1,
	VCLK_IP_QE_TNR_MSA1,
	VCLK_IP_ITP_CMU_ITP,
	VCLK_IP_AD_APB_ITP,
	VCLK_IP_D_TZPC_ITP,
	VCLK_IP_GPC_ITP,
	VCLK_IP_ITP,
	VCLK_IP_SLH_AXI_MI_P_ITP,
	VCLK_IP_SYSREG_ITP,
	VCLK_IP_LH_AST_MI_L_OTF0_DNS_ITP,
	VCLK_IP_LH_AST_MI_L_OTF1_DNS_ITP,
	VCLK_IP_LH_AST_SI_L_OTF_ITP_DNS,
	VCLK_IP_SSMT_ITP,
	VCLK_IP_QE_ITP,
	VCLK_IP_PPMU_ITP,
	VCLK_IP_LH_AXI_SI_LD_ITP_DNS,
	VCLK_IP_SLH_AXI_MI_P_MCSC,
	VCLK_IP_LH_AXI_SI_D0_MCSC,
	VCLK_IP_SYSREG_MCSC,
	VCLK_IP_MCSC_CMU_MCSC,
	VCLK_IP_LH_AST_MI_L_OTF0_DNS_MCSC,
	VCLK_IP_D_TZPC_MCSC,
	VCLK_IP_LH_AST_SI_L_OTF_MCSC_TNR,
	VCLK_IP_LH_AST_MI_L_OTF1_DNS_MCSC,
	VCLK_IP_GPC_MCSC,
	VCLK_IP_ITSC,
	VCLK_IP_SSMT_D0_MCSC,
	VCLK_IP_SYSMMU_D0_MCSC,
	VCLK_IP_PPMU_D0_MCSC,
	VCLK_IP_SSMT_D0_ITSC,
	VCLK_IP_PPMU_D1_ITSC,
	VCLK_IP_PPMU_D0_ITSC,
	VCLK_IP_LH_AST_MI_L_VO_GDC_MCSC,
	VCLK_IP_LH_AXI_SI_LD_MCSC_DNS,
	VCLK_IP_AD_APB_ITSC,
	VCLK_IP_AD_APB_MCSC,
	VCLK_IP_MCSC,
	VCLK_IP_LH_AXI_SI_D1_MCSC,
	VCLK_IP_SYSMMU_D1_MCSC,
	VCLK_IP_LH_AST_MI_L_OTF2_DNS_MCSC,
	VCLK_IP_LH_AST_MI_I_ITSC_MCSC,
	VCLK_IP_LH_AST_MI_L_OTF_TNR_MCSC,
	VCLK_IP_LH_AST_SI_I_ITSC_MCSC,
	VCLK_IP_LH_AST_SI_L_VO_MCSC_CSIS,
	VCLK_IP_SSMT_D1_ITSC,
	VCLK_IP_PPMU_D1_MCSC,
	VCLK_IP_SSMT_D1_MCSC,
	VCLK_IP_QE_D1_ITSC,
	VCLK_IP_QE_D2_ITSC,
	VCLK_IP_QE_D0_MCSC,
	VCLK_IP_QE_D1_MCSC,
	VCLK_IP_QE_D2_MCSC,
	VCLK_IP_QE_D3_MCSC,
	VCLK_IP_SYSMMU_D2_MCSC,
	VCLK_IP_LH_AXI_SI_D2_MCSC,
	VCLK_IP_QE_D4_MCSC,
	VCLK_IP_C2R_MCSC,
	VCLK_IP_QE_D3_ITSC,
	VCLK_IP_QE_D5_MCSC,
	VCLK_IP_MFC_CMU_MFC,
	VCLK_IP_AS_APB_MFC,
	VCLK_IP_SYSREG_MFC,
	VCLK_IP_LH_AXI_SI_D0_MFC,
	VCLK_IP_LH_AXI_SI_D1_MFC,
	VCLK_IP_SLH_AXI_MI_P_MFC,
	VCLK_IP_SYSMMU_D0_MFC,
	VCLK_IP_SYSMMU_D1_MFC,
	VCLK_IP_PPMU_D0_MFC,
	VCLK_IP_PPMU_D1_MFC,
	VCLK_IP_SSMT_D0_MFC,
	VCLK_IP_MFC,
	VCLK_IP_D_TZPC_MFC,
	VCLK_IP_SSMT_D1_MFC,
	VCLK_IP_GPC_MFC,
	VCLK_IP_MIF_CMU_MIF,
	VCLK_IP_DDRPHY,
	VCLK_IP_SYSREG_MIF,
	VCLK_IP_LH_AXI_MI_P_MIF_CU,
	VCLK_IP_AXI2APB_P_MIF,
	VCLK_IP_APBBR_DDRPHY,
	VCLK_IP_APBBR_DMC,
	VCLK_IP_DMC,
	VCLK_IP_QCH_ADAPTER_PPC_DEBUG,
	VCLK_IP_GPC_MIF,
	VCLK_IP_D_TZPC_MIF,
	VCLK_IP_PPC_DEBUG,
	VCLK_IP_GEN_WREN_SECURE,
	VCLK_IP_LH_AST_SI_G_DMC_CD,
	VCLK_IP_SLH_AXI_MI_P_MIF,
	VCLK_IP_LH_AXI_SI_P_MIF_CU,
	VCLK_IP_LH_AST_SI_G_DMC,
	VCLK_IP_LH_AST_MI_G_DMC_CD,
	VCLK_IP_SYSREG_MISC,
	VCLK_IP_WDT_CLUSTER1,
	VCLK_IP_WDT_CLUSTER0,
	VCLK_IP_OTP_CON_BIRA,
	VCLK_IP_GIC,
	VCLK_IP_MCT,
	VCLK_IP_OTP_CON_TOP,
	VCLK_IP_D_TZPC_MISC,
	VCLK_IP_TMU_SUB,
	VCLK_IP_TMU_TOP,
	VCLK_IP_OTP_CON_BISR,
	VCLK_IP_DIT,
	VCLK_IP_LH_AXI_MI_P_MISC_CU,
	VCLK_IP_LH_ACEL_SI_D_MISC,
	VCLK_IP_PDMA0,
	VCLK_IP_PPMU_MISC,
	VCLK_IP_QE_DIT,
	VCLK_IP_QE_PDMA0,
	VCLK_IP_MISC_CMU_MISC,
	VCLK_IP_QE_RTIC,
	VCLK_IP_QE_SPDMA0,
	VCLK_IP_QE_SSS,
	VCLK_IP_RTIC,
	VCLK_IP_SPDMA0,
	VCLK_IP_SSS,
	VCLK_IP_SSMT_SSS,
	VCLK_IP_GPC_MISC,
	VCLK_IP_AD_APB_DIT,
	VCLK_IP_ADM_AHB_G_SSS,
	VCLK_IP_AD_APB_PUF,
	VCLK_IP_LH_AST_MI_L_ICC_CLUSTER0_GIC_CU,
	VCLK_IP_LH_AXI_MI_ID_SSS,
	VCLK_IP_LH_AST_SI_L_IRI_GIC_CLUSTER0_CD,
	VCLK_IP_LH_AXI_SI_ID_SSS,
	VCLK_IP_PUF,
	VCLK_IP_XIU_D_MISC,
	VCLK_IP_SYSMMU_MISC,
	VCLK_IP_SYSMMU_SSS,
	VCLK_IP_LH_AXI_MI_P_GIC_CU,
	VCLK_IP_SSMT_RTIC,
	VCLK_IP_SSMT_SPDMA0,
	VCLK_IP_SSMT_PDMA0,
	VCLK_IP_SSMT_DIT,
	VCLK_IP_LH_AST_MI_L_IRI_GIC_CLUSTER0_CD,
	VCLK_IP_LH_AST_SI_L_IRI_GIC_CLUSTER0,
	VCLK_IP_LH_AST_MI_L_ICC_CLUSTER0_GIC,
	VCLK_IP_LH_AST_SI_L_ICC_CLUSTER0_GIC_CU,
	VCLK_IP_SLH_AXI_MI_P_MISC,
	VCLK_IP_LH_AXI_SI_P_MISC_CU,
	VCLK_IP_SPDMA1,
	VCLK_IP_QE_PDMA1,
	VCLK_IP_QE_SPDMA1,
	VCLK_IP_SSMT_PDMA1,
	VCLK_IP_SSMT_SPDMA1,
	VCLK_IP_PDMA1,
	VCLK_IP_SLH_AXI_MI_P_GIC,
	VCLK_IP_LH_AXI_SI_P_GIC_CU,
	VCLK_IP_NOCL0_CMU_NOCL0,
	VCLK_IP_SYSREG_NOCL0,
	VCLK_IP_TREX_P_NOCL0,
	VCLK_IP_LH_ACE_MI_D0_CPUCL0,
	VCLK_IP_LH_ACE_MI_D1_CPUCL0,
	VCLK_IP_TREX_D_NOCL0,
	VCLK_IP_AD_APB_CCI,
	VCLK_IP_D_TZPC_NOCL0,
	VCLK_IP_BDU,
	VCLK_IP_GPC_NOCL0,
	VCLK_IP_PPMU_ACE_CPUCL0_D0,
	VCLK_IP_PPMU_ACE_CPUCL0_D1,
	VCLK_IP_SFR_APBIF_CMU_TOPC,
	VCLK_IP_PPC_NOCL1A_M0_EVENT,
	VCLK_IP_PPC_NOCL1A_M1_EVENT,
	VCLK_IP_PPC_NOCL1A_M2_EVENT,
	VCLK_IP_PPC_NOCL1A_M3_EVENT,
	VCLK_IP_PPC_NOCL1B_M0_EVENT,
	VCLK_IP_PPC_CPUCL0_D0_CYCLE,
	VCLK_IP_SLC_CB_TOP,
	VCLK_IP_CCI,
	VCLK_IP_LH_ACEL_MI_D_EH,
	VCLK_IP_PPC_EH_CYCLE,
	VCLK_IP_PPC_IO_EVENT,
	VCLK_IP_PPC_EH_EVENT,
	VCLK_IP_PPC_CPUCL0_D0_EVENT,
	VCLK_IP_PPC_CCI_M1_EVENT,
	VCLK_IP_PPC_CCI_M2_EVENT,
	VCLK_IP_PPC_CCI_M3_EVENT,
	VCLK_IP_PPC_CCI_M4_EVENT,
	VCLK_IP_PPC_IO_CYCLE,
	VCLK_IP_PPC_CCI_M1_CYCLE,
	VCLK_IP_PPC_NOCL1A_M0_CYCLE,
	VCLK_IP_PPC_NOCL1B_M0_CYCLE,
	VCLK_IP_PPC_DBG_CC,
	VCLK_IP_MPACE_ASB_D0_MIF,
	VCLK_IP_MPACE_ASB_D1_MIF,
	VCLK_IP_MPACE_ASB_D2_MIF,
	VCLK_IP_MPACE_ASB_D3_MIF,
	VCLK_IP_PPC_CPUCL0_D1_EVENT,
	VCLK_IP_SLC_CH_TOP,
	VCLK_IP_SLC_CH1,
	VCLK_IP_SLC_CH2,
	VCLK_IP_SLC_CH3,
	VCLK_IP_CPE425,
	VCLK_IP_GRAY2BIN_ATB_TSVALUE,
	VCLK_IP_SLH_AXI_MI_G_NOCL0,
	VCLK_IP_LH_AST_MI_G_DMC0_CU,
	VCLK_IP_LH_AST_MI_G_NOCL1A_CU,
	VCLK_IP_LH_AST_MI_G_DMC1_CU,
	VCLK_IP_LH_AST_MI_G_DMC2_CU,
	VCLK_IP_LH_AST_MI_G_DMC3_CU,
	VCLK_IP_LH_AST_MI_G_NOCL1B_CU,
	VCLK_IP_LH_AST_MI_G_NOCL2A_CU,
	VCLK_IP_ASYNCSFR_WR_SMC,
	VCLK_IP_SLH_AXI_SI_P_ALIVE,
	VCLK_IP_SLH_AXI_SI_P_CPUCL0,
	VCLK_IP_SLH_AXI_SI_P_EH,
	VCLK_IP_SLH_AXI_SI_P_GIC,
	VCLK_IP_SLH_AXI_SI_P_MIF0,
	VCLK_IP_SLH_AXI_SI_P_MIF1,
	VCLK_IP_SLH_AXI_SI_P_MIF2,
	VCLK_IP_SLH_AXI_SI_P_MIF3,
	VCLK_IP_SLH_AXI_SI_P_MISC,
	VCLK_IP_SLH_AXI_SI_P_PERIC0,
	VCLK_IP_SLH_AXI_SI_P_PERIC1,
	VCLK_IP_LH_ATB_SI_T_BDU,
	VCLK_IP_LH_ATB_SI_T_SLC,
	VCLK_IP_LH_AXI_SI_P_ALIVE_CD,
	VCLK_IP_LH_AXI_SI_P_CPUCL0_CD,
	VCLK_IP_LH_AXI_SI_P_EH_CD,
	VCLK_IP_LH_AXI_SI_P_GIC_CD,
	VCLK_IP_LH_AXI_SI_P_MIF0_CD,
	VCLK_IP_LH_AXI_SI_P_MIF1_CD,
	VCLK_IP_LH_AXI_SI_P_MIF2_CD,
	VCLK_IP_LH_AXI_SI_P_MIF3_CD,
	VCLK_IP_LH_AXI_SI_P_MISC_CD,
	VCLK_IP_LH_AXI_SI_P_PERIC0_CD,
	VCLK_IP_LH_AXI_SI_P_PERIC1_CD,
	VCLK_IP_LH_ATB_SI_T_BDU_CD,
	VCLK_IP_LH_ATB_SI_T_SLC_CD,
	VCLK_IP_LH_AXI_MI_P_ALIVE_CD,
	VCLK_IP_LH_AXI_MI_P_CPUCL0_CD,
	VCLK_IP_LH_AXI_MI_P_EH_CD,
	VCLK_IP_LH_AXI_MI_P_GIC_CD,
	VCLK_IP_LH_AXI_MI_P_MIF0_CD,
	VCLK_IP_LH_AXI_MI_P_MIF1_CD,
	VCLK_IP_LH_AXI_MI_P_MIF2_CD,
	VCLK_IP_LH_AXI_MI_P_MIF3_CD,
	VCLK_IP_LH_AXI_MI_P_MISC_CD,
	VCLK_IP_LH_AXI_MI_P_PERIC0_CD,
	VCLK_IP_LH_AXI_MI_P_PERIC1_CD,
	VCLK_IP_LH_ATB_MI_T_BDU_CD,
	VCLK_IP_LH_ATB_MI_T_SLC_CD,
	VCLK_IP_LH_AST_MI_G_DMC0,
	VCLK_IP_LH_AST_SI_G_DMC0_CU,
	VCLK_IP_LH_AST_MI_G_DMC1,
	VCLK_IP_LH_AST_SI_G_DMC1_CU,
	VCLK_IP_LH_AST_MI_G_DMC2,
	VCLK_IP_LH_AST_SI_G_DMC2_CU,
	VCLK_IP_LH_AST_MI_G_DMC3,
	VCLK_IP_LH_AST_SI_G_DMC3_CU,
	VCLK_IP_LH_AST_MI_G_NOCL1A,
	VCLK_IP_LH_AST_MI_G_NOCL1B,
	VCLK_IP_LH_AST_MI_G_NOCL2A,
	VCLK_IP_LH_AST_SI_G_NOCL1A_CU,
	VCLK_IP_LH_AST_SI_G_NOCL1B_CU,
	VCLK_IP_LH_AST_SI_G_NOCL2A_CU,
	VCLK_IP_NOCL1A_CMU_NOCL1A,
	VCLK_IP_TREX_D_NOCL1A,
	VCLK_IP_SYSREG_NOCL1A,
	VCLK_IP_LH_ACEL_MI_D0_G3D,
	VCLK_IP_D_TZPC_NOCL1A,
	VCLK_IP_LH_ACEL_MI_D1_G3D,
	VCLK_IP_LH_ACEL_MI_D2_G3D,
	VCLK_IP_LH_ACEL_MI_D3_G3D,
	VCLK_IP_SSMT_G3D0,
	VCLK_IP_LH_ACEL_MI_D_TPU,
	VCLK_IP_SYSMMU_G3D,
	VCLK_IP_LH_AXI_SI_P_G3D_CD,
	VCLK_IP_GPC_NOCL1A,
	VCLK_IP_SSMT_G3D1,
	VCLK_IP_SSMT_G3D2,
	VCLK_IP_SSMT_G3D3,
	VCLK_IP_PPCFW_G3D0,
	VCLK_IP_AD_APB_SYSMMU_G3D,
	VCLK_IP_TREX_P_NOCL1A,
	VCLK_IP_LH_AST_SI_G_NOCL1A_CD,
	VCLK_IP_PPC_NOCL2A_M0_EVENT,
	VCLK_IP_PPC_NOCL2A_M1_EVENT,
	VCLK_IP_PPC_NOCL2A_M2_EVENT,
	VCLK_IP_PPC_NOCL2A_M3_EVENT,
	VCLK_IP_PPC_G3D_D0_EVENT,
	VCLK_IP_PPC_G3D_D1_EVENT,
	VCLK_IP_PPC_G3D_D2_EVENT,
	VCLK_IP_PPC_G3D_D3_EVENT,
	VCLK_IP_PPC_TPU_EVENT,
	VCLK_IP_PPC_NOCL2A_M0_CYCLE,
	VCLK_IP_PPC_G3D_D0_CYCLE,
	VCLK_IP_PPC_TPU_CYCLE,
	VCLK_IP_PPCFW_G3D1,
	VCLK_IP_LH_AXI_MI_D0_AUR,
	VCLK_IP_LH_AXI_MI_D1_AUR,
	VCLK_IP_LH_AXI_SI_P_AUR_CD,
	VCLK_IP_PPC_AUR_D0_EVENT,
	VCLK_IP_PPC_AUR_D1_EVENT,
	VCLK_IP_PPC_AUR_D0_CYCLE,
	VCLK_IP_LH_AST_MI_G_NOCL1A_CD,
	VCLK_IP_LH_AST_SI_G_NOCL1A,
	VCLK_IP_LH_AXI_MI_P_AUR_CD,
	VCLK_IP_SLH_AXI_SI_P_AUR,
	VCLK_IP_LH_AXI_MI_P_G3D_CD,
	VCLK_IP_SLH_AXI_SI_P_G3D,
	VCLK_IP_LH_AXI_SI_P_TPU_CD,
	VCLK_IP_LH_AXI_MI_P_TPU_CD,
	VCLK_IP_SLH_AXI_SI_P_TPU,
	VCLK_IP_NOCL1B_CMU_NOCL1B,
	VCLK_IP_TREX_D_NOCL1B,
	VCLK_IP_D_TZPC_NOCL1B,
	VCLK_IP_LH_ACEL_MI_D_HSI0,
	VCLK_IP_LH_ACEL_MI_D_HSI1,
	VCLK_IP_LH_AXI_MI_D_AOC,
	VCLK_IP_LH_AXI_MI_D_APM,
	VCLK_IP_LH_AXI_MI_D_GSA,
	VCLK_IP_LH_AXI_SI_P_AOC_CD,
	VCLK_IP_LH_AXI_SI_P_GSA_CD,
	VCLK_IP_LH_AXI_SI_P_HSI0_CD,
	VCLK_IP_LH_AXI_SI_P_HSI1_CD,
	VCLK_IP_SYSREG_NOCL1B,
	VCLK_IP_TREX_P_NOCL1B,
	VCLK_IP_GPC_NOCL1B,
	VCLK_IP_LH_AXI_MI_G_CSSYS_CU,
	VCLK_IP_LH_AST_SI_G_NOCL1B_CD,
	VCLK_IP_PPC_AOC_EVENT,
	VCLK_IP_PPC_AOC_CYCLE,
	VCLK_IP_LH_AST_MI_G_NOCL1B_CD,
	VCLK_IP_LH_AST_SI_G_NOCL1B,
	VCLK_IP_LH_AXI_MI_P_AOC_CD,
	VCLK_IP_SLH_AXI_SI_P_AOC,
	VCLK_IP_LH_AXI_MI_P_GSA_CD,
	VCLK_IP_SLH_AXI_SI_P_GSA,
	VCLK_IP_LH_AXI_MI_P_HSI0_CD,
	VCLK_IP_SLH_AXI_SI_P_HSI0,
	VCLK_IP_LH_AXI_MI_P_HSI1_CD,
	VCLK_IP_SLH_AXI_SI_P_HSI1,
	VCLK_IP_SLH_AXI_MI_G_CSSYS,
	VCLK_IP_LH_AXI_SI_G_CSSYS_CU,
	VCLK_IP_NOCL2A_CMU_NOCL2A,
	VCLK_IP_SYSREG_NOCL2A,
	VCLK_IP_LH_AXI_MI_D0_G2D,
	VCLK_IP_LH_AXI_MI_D1_G2D,
	VCLK_IP_LH_ACEL_MI_D2_G2D,
	VCLK_IP_LH_AXI_MI_D0_CSIS,
	VCLK_IP_LH_ACEL_MI_D_MISC,
	VCLK_IP_LH_AXI_MI_D0_DPU,
	VCLK_IP_LH_AXI_MI_D0_MFC,
	VCLK_IP_LH_AXI_MI_D1_DPU,
	VCLK_IP_LH_AXI_MI_D1_MFC,
	VCLK_IP_LH_AXI_MI_D2_DPU,
	VCLK_IP_LH_AXI_SI_P_HSI2_CD,
	VCLK_IP_LH_AXI_MI_D1_CSIS,
	VCLK_IP_LH_ACEL_MI_D_HSI2,
	VCLK_IP_LH_AXI_MI_D_BO,
	VCLK_IP_D_TZPC_NOCL2A,
	VCLK_IP_TREX_D_NOCL2A,
	VCLK_IP_SLH_AXI_SI_P_BO,
	VCLK_IP_GPC_NOCL2A,
	VCLK_IP_LH_AXI_MI_D_G3AA,
	VCLK_IP_LH_AXI_MI_D_DNS,
	VCLK_IP_LH_AXI_MI_D_IPP,
	VCLK_IP_LH_AXI_MI_D0_MCSC,
	VCLK_IP_LH_AXI_MI_D0_TNR,
	VCLK_IP_LH_AXI_MI_D1_MCSC,
	VCLK_IP_LH_AXI_MI_D1_TNR,
	VCLK_IP_TREX_P_NOCL2A,
	VCLK_IP_LH_AXI_MI_D0_GDC,
	VCLK_IP_LH_AXI_MI_D1_GDC,
	VCLK_IP_LH_AXI_MI_D2_GDC,
	VCLK_IP_LH_AXI_MI_D2_TNR,
	VCLK_IP_LH_AXI_MI_D3_TNR,
	VCLK_IP_LH_AST_SI_G_NOCL2A_CD,
	VCLK_IP_LH_AXI_MI_D2_MCSC,
	VCLK_IP_LH_AXI_MI_D4_TNR,
	VCLK_IP_LH_AST_MI_G_NOCL2A_CD,
	VCLK_IP_LH_AST_SI_G_NOCL2A,
	VCLK_IP_LH_AXI_MI_P_HSI2_CD,
	VCLK_IP_SLH_AXI_SI_P_HSI2,
	VCLK_IP_SLH_AXI_SI_P_DPU,
	VCLK_IP_SLH_AXI_SI_P_CSIS,
	VCLK_IP_SLH_AXI_SI_P_G3AA,
	VCLK_IP_SLH_AXI_SI_P_IPP,
	VCLK_IP_SLH_AXI_SI_P_DNS,
	VCLK_IP_SLH_AXI_SI_P_ITP,
	VCLK_IP_SLH_AXI_SI_P_MCSC,
	VCLK_IP_SLH_AXI_SI_P_TNR,
	VCLK_IP_SLH_AXI_SI_P_MFC,
	VCLK_IP_SLH_AXI_SI_P_G2D,
	VCLK_IP_SLH_AXI_SI_P_GDC,
	VCLK_IP_SLH_AXI_SI_P_DISP,
	VCLK_IP_SLH_AXI_SI_P_PDP,
	VCLK_IP_PDP_CMU_PDP,
	VCLK_IP_D_TZPC_PDP,
	VCLK_IP_LH_AST_MI_L_OTF0_CSIS_PDP,
	VCLK_IP_LH_AST_MI_L_OTF1_CSIS_PDP,
	VCLK_IP_LH_AST_MI_L_OTF2_CSIS_PDP,
	VCLK_IP_SLH_AXI_MI_P_PDP,
	VCLK_IP_GPC_PDP,
	VCLK_IP_PDP_TOP,
	VCLK_IP_SSMT_PDP_STAT,
	VCLK_IP_QE_PDP_STAT0,
	VCLK_IP_AD_APB_C2_PDP,
	VCLK_IP_LH_AST_SI_L_OTF0_PDP_IPP,
	VCLK_IP_LH_AST_SI_L_OTF1_PDP_IPP,
	VCLK_IP_LH_AST_SI_L_OTF2_PDP_IPP,
	VCLK_IP_LH_AST_SI_L_OTF0_PDP_CSIS,
	VCLK_IP_LH_AST_SI_L_OTF1_PDP_CSIS,
	VCLK_IP_LH_AST_SI_L_OTF2_PDP_CSIS,
	VCLK_IP_LH_AST_SI_L_OTF0_PDP_G3AA,
	VCLK_IP_LH_AST_SI_L_OTF1_PDP_G3AA,
	VCLK_IP_LH_AST_SI_L_OTF2_PDP_G3AA,
	VCLK_IP_LH_AST_SI_L_YOTF0_PDP_G3AA,
	VCLK_IP_LH_AST_SI_L_YOTF1_PDP_G3AA,
	VCLK_IP_LH_AST_MI_L_VO_CSIS_PDP,
	VCLK_IP_LH_AST_SI_L_VO_PDP_IPP,
	VCLK_IP_LH_AXI_SI_LD_PDP_CSIS,
	VCLK_IP_SYSREG_PDP,
	VCLK_IP_XIU_D_PDP,
	VCLK_IP_QE_PDP_STAT1,
	VCLK_IP_QE_PDP_AF0,
	VCLK_IP_QE_PDP_AF1,
	VCLK_IP_AD_APB_VRA,
	VCLK_IP_QE_VRA,
	VCLK_IP_VRA,
	VCLK_IP_SSMT_VRA,
	VCLK_IP_LH_AXI_SI_LD_PDP_DNS,
	VCLK_IP_PPMU_VRA,
	VCLK_IP_GPIO_PERIC0,
	VCLK_IP_SYSREG_PERIC0,
	VCLK_IP_PERIC0_CMU_PERIC0,
	VCLK_IP_LH_AXI_MI_P_PERIC0_CU,
	VCLK_IP_D_TZPC_PERIC0,
	VCLK_IP_GPC_PERIC0,
	VCLK_IP_USI1_USI,
	VCLK_IP_USI2_USI,
	VCLK_IP_USI3_USI,
	VCLK_IP_USI4_USI,
	VCLK_IP_USI5_USI,
	VCLK_IP_USI6_USI,
	VCLK_IP_USI7_USI,
	VCLK_IP_USI8_USI,
	VCLK_IP_I3C1,
	VCLK_IP_I3C2,
	VCLK_IP_I3C3,
	VCLK_IP_I3C4,
	VCLK_IP_I3C5,
	VCLK_IP_I3C6,
	VCLK_IP_I3C7,
	VCLK_IP_I3C8,
	VCLK_IP_USI0_UART,
	VCLK_IP_USI14_USI,
	VCLK_IP_SLH_AXI_MI_P_PERIC0,
	VCLK_IP_LH_AXI_SI_P_PERIC0_CU,
	VCLK_IP_GPIO_PERIC1,
	VCLK_IP_SYSREG_PERIC1,
	VCLK_IP_PERIC1_CMU_PERIC1,
	VCLK_IP_LH_AXI_MI_P_PERIC1_CU,
	VCLK_IP_D_TZPC_PERIC1,
	VCLK_IP_GPC_PERIC1,
	VCLK_IP_USI0_USI,
	VCLK_IP_USI9_USI,
	VCLK_IP_USI10_USI,
	VCLK_IP_USI11_USI,
	VCLK_IP_USI12_USI,
	VCLK_IP_USI13_USI,
	VCLK_IP_I3C0,
	VCLK_IP_PWM,
	VCLK_IP_SLH_AXI_MI_P_PERIC1,
	VCLK_IP_LH_AXI_SI_P_PERIC1_CU,
	VCLK_IP_USI15_USI,
	VCLK_IP_USI16_USI,
	VCLK_IP_S2D_CMU_S2D,
	VCLK_IP_BIS_S2D,
	VCLK_IP_LH_AXI_MI_LG_SCAN2DRAM_CU,
	VCLK_IP_SLH_AXI_MI_LG_SCAN2DRAM,
	VCLK_IP_LH_AXI_SI_LG_SCAN2DRAM_CU,
	VCLK_IP_APB_ASYNC_SYSMMU_D0_S1_NS_TNR,
	VCLK_IP_D_TZPC_TNR,
	VCLK_IP_LH_AST_MI_L_VO_DNS_TNR,
	VCLK_IP_SLH_AXI_MI_P_TNR,
	VCLK_IP_LH_AST_SI_L_OTF_TNR_MCSC,
	VCLK_IP_LH_AXI_SI_D0_TNR,
	VCLK_IP_LH_AXI_SI_D1_TNR,
	VCLK_IP_PPMU_D0_TNR,
	VCLK_IP_PPMU_D1_TNR,
	VCLK_IP_SYSMMU_D0_TNR,
	VCLK_IP_SYSMMU_D1_TNR,
	VCLK_IP_SYSREG_TNR,
	VCLK_IP_TNR_CMU_TNR,
	VCLK_IP_LH_AST_SI_L_VO_TNR_GDC,
	VCLK_IP_TNR,
	VCLK_IP_LH_AST_MI_L_OTF_MCSC_TNR,
	VCLK_IP_LH_AXI_SI_D2_TNR,
	VCLK_IP_LH_AXI_SI_D3_TNR,
	VCLK_IP_PPMU_D2_TNR,
	VCLK_IP_PPMU_D3_TNR,
	VCLK_IP_SYSMMU_D2_TNR,
	VCLK_IP_SYSMMU_D3_TNR,
	VCLK_IP_PPMU_D4_TNR,
	VCLK_IP_PPMU_D5_TNR,
	VCLK_IP_PPMU_D6_TNR,
	VCLK_IP_PPMU_D7_TNR,
	VCLK_IP_XIU_D0_TNR,
	VCLK_IP_XIU_D1_TNR,
	VCLK_IP_QE_D0_TNR,
	VCLK_IP_QE_D1_TNR,
	VCLK_IP_QE_D5_TNR,
	VCLK_IP_QE_D6_TNR,
	VCLK_IP_QE_D7_TNR,
	VCLK_IP_SSMT_D0_TNR,
	VCLK_IP_SSMT_D1_TNR,
	VCLK_IP_SSMT_D2_TNR,
	VCLK_IP_SSMT_D3_TNR,
	VCLK_IP_LH_AXI_SI_D4_TNR,
	VCLK_IP_SYSMMU_D4_TNR,
	VCLK_IP_SSMT_D4_TNR,
	VCLK_IP_SSMT_D5_TNR,
	VCLK_IP_SSMT_D6_TNR,
	VCLK_IP_SSMT_D7_TNR,
	VCLK_IP_GPC_TNR,
	VCLK_IP_LH_AST_SI_L_OTF_TNR_GDC,
	VCLK_IP_SSMT_D8_TNR,
	VCLK_IP_QE_D8_TNR,
	VCLK_IP_PPMU_D8_TNR,
	VCLK_IP_TPU_CMU_TPU,
	VCLK_IP_LH_AXI_MI_P_TPU_CU,
	VCLK_IP_D_TZPC_TPU,
	VCLK_IP_LH_ACEL_SI_D_TPU,
	VCLK_IP_SYSREG_TPU,
	VCLK_IP_SYSMMU_TPU,
	VCLK_IP_PPMU_TPU,
	VCLK_IP_SSMT_TPU,
	VCLK_IP_GPC_TPU,
	VCLK_IP_AS_APB_SYSMMU_NS_TPU,
	VCLK_IP_TPU,
	VCLK_IP_LH_ATB_SI_LT0_TPU_CPUCL0,
	VCLK_IP_LH_ATB_SI_LT1_TPU_CPUCL0,
	VCLK_IP_ASYNC_APBM_TPU,
	VCLK_IP_ASYNC_APB_INT_TPU,
	VCLK_IP_LH_ATB_MI_LT0_TPU_CPUCL0_CD,
	VCLK_IP_LH_ATB_MI_LT1_TPU_CPUCL0_CD,
	VCLK_IP_HPM_TPU,
	VCLK_IP_BUSIF_HPMTPU,
	VCLK_IP_LH_ATB_SI_LT0_TPU_CPUCL0_CD,
	VCLK_IP_LH_ATB_SI_LT1_TPU_CPUCL0_CD,
	VCLK_IP_BUSIF_DDDTPU,
	VCLK_IP_SLH_AXI_MI_P_TPU,
	VCLK_IP_LH_AXI_SI_P_TPU_CU,
	end_of_gate_vclk,
	num_of_gate_vclk = end_of_gate_vclk - ((MASK_OF_ID & end_of_common_vclk) | GATE_VCLK_TYPE),

};
#endif