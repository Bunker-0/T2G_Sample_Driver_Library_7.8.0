/***************************************************************************//**
* \file cyreg_flexray.h
*
* \brief
* FLEXRAY register definition header
*
* \note
* Generator version: 1.5.0.1299
* Database revision: TVIIBH8M_WW1940_B1_CFR
*
********************************************************************************
* \copyright
* Copyright 2016-2019, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef _CYREG_FLEXRAY_H_
#define _CYREG_FLEXRAY_H_

#include "cyip_flexray.h"

/**
  * \brief FlexRay Bus Interface (FLEXRAY)
  */
#define CYREG_FLEXRAY0_CTL              ((volatile un_FLEXRAY_CTL_t*) 0x40560000UL)
#define CYREG_FLEXRAY0_DMA_CTL          ((volatile un_FLEXRAY_DMA_CTL_t*) 0x40560004UL)
#define CYREG_FLEXRAY0_TEST1            ((volatile un_FLEXRAY_TEST1_t*) 0x40560010UL)
#define CYREG_FLEXRAY0_TEST2            ((volatile un_FLEXRAY_TEST2_t*) 0x40560014UL)
#define CYREG_FLEXRAY0_LCK              ((volatile un_FLEXRAY_LCK_t*) 0x4056001CUL)
#define CYREG_FLEXRAY0_EIR              ((volatile un_FLEXRAY_EIR_t*) 0x40560020UL)
#define CYREG_FLEXRAY0_SIR              ((volatile un_FLEXRAY_SIR_t*) 0x40560024UL)
#define CYREG_FLEXRAY0_EILS             ((volatile un_FLEXRAY_EILS_t*) 0x40560028UL)
#define CYREG_FLEXRAY0_SILS             ((volatile un_FLEXRAY_SILS_t*) 0x4056002CUL)
#define CYREG_FLEXRAY0_EIES             ((volatile un_FLEXRAY_EIES_t*) 0x40560030UL)
#define CYREG_FLEXRAY0_EIER             ((volatile un_FLEXRAY_EIER_t*) 0x40560034UL)
#define CYREG_FLEXRAY0_SIES             ((volatile un_FLEXRAY_SIES_t*) 0x40560038UL)
#define CYREG_FLEXRAY0_SIER             ((volatile un_FLEXRAY_SIER_t*) 0x4056003CUL)
#define CYREG_FLEXRAY0_ILE              ((volatile un_FLEXRAY_ILE_t*) 0x40560040UL)
#define CYREG_FLEXRAY0_T0C              ((volatile un_FLEXRAY_T0C_t*) 0x40560044UL)
#define CYREG_FLEXRAY0_T1C              ((volatile un_FLEXRAY_T1C_t*) 0x40560048UL)
#define CYREG_FLEXRAY0_STPW1            ((volatile un_FLEXRAY_STPW1_t*) 0x4056004CUL)
#define CYREG_FLEXRAY0_STPW2            ((volatile un_FLEXRAY_STPW2_t*) 0x40560050UL)
#define CYREG_FLEXRAY0_SUCC1            ((volatile un_FLEXRAY_SUCC1_t*) 0x40560080UL)
#define CYREG_FLEXRAY0_SUCC2            ((volatile un_FLEXRAY_SUCC2_t*) 0x40560084UL)
#define CYREG_FLEXRAY0_SUCC3            ((volatile un_FLEXRAY_SUCC3_t*) 0x40560088UL)
#define CYREG_FLEXRAY0_NEMC             ((volatile un_FLEXRAY_NEMC_t*) 0x4056008CUL)
#define CYREG_FLEXRAY0_PRTC1            ((volatile un_FLEXRAY_PRTC1_t*) 0x40560090UL)
#define CYREG_FLEXRAY0_PRTC2            ((volatile un_FLEXRAY_PRTC2_t*) 0x40560094UL)
#define CYREG_FLEXRAY0_MHDC             ((volatile un_FLEXRAY_MHDC_t*) 0x40560098UL)
#define CYREG_FLEXRAY0_GTUC1            ((volatile un_FLEXRAY_GTUC1_t*) 0x405600A0UL)
#define CYREG_FLEXRAY0_GTUC2            ((volatile un_FLEXRAY_GTUC2_t*) 0x405600A4UL)
#define CYREG_FLEXRAY0_GTUC3            ((volatile un_FLEXRAY_GTUC3_t*) 0x405600A8UL)
#define CYREG_FLEXRAY0_GTUC4            ((volatile un_FLEXRAY_GTUC4_t*) 0x405600ACUL)
#define CYREG_FLEXRAY0_GTUC5            ((volatile un_FLEXRAY_GTUC5_t*) 0x405600B0UL)
#define CYREG_FLEXRAY0_GTUC6            ((volatile un_FLEXRAY_GTUC6_t*) 0x405600B4UL)
#define CYREG_FLEXRAY0_GTUC7            ((volatile un_FLEXRAY_GTUC7_t*) 0x405600B8UL)
#define CYREG_FLEXRAY0_GTUC8            ((volatile un_FLEXRAY_GTUC8_t*) 0x405600BCUL)
#define CYREG_FLEXRAY0_GTUC9            ((volatile un_FLEXRAY_GTUC9_t*) 0x405600C0UL)
#define CYREG_FLEXRAY0_GTUC10           ((volatile un_FLEXRAY_GTUC10_t*) 0x405600C4UL)
#define CYREG_FLEXRAY0_GTUC11           ((volatile un_FLEXRAY_GTUC11_t*) 0x405600C8UL)
#define CYREG_FLEXRAY0_CCSV             ((volatile un_FLEXRAY_CCSV_t*) 0x40560100UL)
#define CYREG_FLEXRAY0_CCEV             ((volatile un_FLEXRAY_CCEV_t*) 0x40560104UL)
#define CYREG_FLEXRAY0_SCV              ((volatile un_FLEXRAY_SCV_t*) 0x40560110UL)
#define CYREG_FLEXRAY0_MTCCV            ((volatile un_FLEXRAY_MTCCV_t*) 0x40560114UL)
#define CYREG_FLEXRAY0_RCV              ((volatile un_FLEXRAY_RCV_t*) 0x40560118UL)
#define CYREG_FLEXRAY0_OCV              ((volatile un_FLEXRAY_OCV_t*) 0x4056011CUL)
#define CYREG_FLEXRAY0_SFS              ((volatile un_FLEXRAY_SFS_t*) 0x40560120UL)
#define CYREG_FLEXRAY0_SWNIT            ((volatile un_FLEXRAY_SWNIT_t*) 0x40560124UL)
#define CYREG_FLEXRAY0_ACS              ((volatile un_FLEXRAY_ACS_t*) 0x40560128UL)
#define CYREG_FLEXRAY0_ESID0            ((volatile un_FLEXRAY_ESID_t*) 0x40560130UL)
#define CYREG_FLEXRAY0_ESID1            ((volatile un_FLEXRAY_ESID_t*) 0x40560134UL)
#define CYREG_FLEXRAY0_ESID2            ((volatile un_FLEXRAY_ESID_t*) 0x40560138UL)
#define CYREG_FLEXRAY0_ESID3            ((volatile un_FLEXRAY_ESID_t*) 0x4056013CUL)
#define CYREG_FLEXRAY0_ESID4            ((volatile un_FLEXRAY_ESID_t*) 0x40560140UL)
#define CYREG_FLEXRAY0_ESID5            ((volatile un_FLEXRAY_ESID_t*) 0x40560144UL)
#define CYREG_FLEXRAY0_ESID6            ((volatile un_FLEXRAY_ESID_t*) 0x40560148UL)
#define CYREG_FLEXRAY0_ESID7            ((volatile un_FLEXRAY_ESID_t*) 0x4056014CUL)
#define CYREG_FLEXRAY0_ESID8            ((volatile un_FLEXRAY_ESID_t*) 0x40560150UL)
#define CYREG_FLEXRAY0_ESID9            ((volatile un_FLEXRAY_ESID_t*) 0x40560154UL)
#define CYREG_FLEXRAY0_ESID10           ((volatile un_FLEXRAY_ESID_t*) 0x40560158UL)
#define CYREG_FLEXRAY0_ESID11           ((volatile un_FLEXRAY_ESID_t*) 0x4056015CUL)
#define CYREG_FLEXRAY0_ESID12           ((volatile un_FLEXRAY_ESID_t*) 0x40560160UL)
#define CYREG_FLEXRAY0_ESID13           ((volatile un_FLEXRAY_ESID_t*) 0x40560164UL)
#define CYREG_FLEXRAY0_ESID14           ((volatile un_FLEXRAY_ESID_t*) 0x40560168UL)
#define CYREG_FLEXRAY0_OSID0            ((volatile un_FLEXRAY_OSID_t*) 0x40560170UL)
#define CYREG_FLEXRAY0_OSID1            ((volatile un_FLEXRAY_OSID_t*) 0x40560174UL)
#define CYREG_FLEXRAY0_OSID2            ((volatile un_FLEXRAY_OSID_t*) 0x40560178UL)
#define CYREG_FLEXRAY0_OSID3            ((volatile un_FLEXRAY_OSID_t*) 0x4056017CUL)
#define CYREG_FLEXRAY0_OSID4            ((volatile un_FLEXRAY_OSID_t*) 0x40560180UL)
#define CYREG_FLEXRAY0_OSID5            ((volatile un_FLEXRAY_OSID_t*) 0x40560184UL)
#define CYREG_FLEXRAY0_OSID6            ((volatile un_FLEXRAY_OSID_t*) 0x40560188UL)
#define CYREG_FLEXRAY0_OSID7            ((volatile un_FLEXRAY_OSID_t*) 0x4056018CUL)
#define CYREG_FLEXRAY0_OSID8            ((volatile un_FLEXRAY_OSID_t*) 0x40560190UL)
#define CYREG_FLEXRAY0_OSID9            ((volatile un_FLEXRAY_OSID_t*) 0x40560194UL)
#define CYREG_FLEXRAY0_OSID10           ((volatile un_FLEXRAY_OSID_t*) 0x40560198UL)
#define CYREG_FLEXRAY0_OSID11           ((volatile un_FLEXRAY_OSID_t*) 0x4056019CUL)
#define CYREG_FLEXRAY0_OSID12           ((volatile un_FLEXRAY_OSID_t*) 0x405601A0UL)
#define CYREG_FLEXRAY0_OSID13           ((volatile un_FLEXRAY_OSID_t*) 0x405601A4UL)
#define CYREG_FLEXRAY0_OSID14           ((volatile un_FLEXRAY_OSID_t*) 0x405601A8UL)
#define CYREG_FLEXRAY0_NMV1             ((volatile un_FLEXRAY_NMV1_t*) 0x405601B0UL)
#define CYREG_FLEXRAY0_NMV2             ((volatile un_FLEXRAY_NMV2_t*) 0x405601B4UL)
#define CYREG_FLEXRAY0_NMV3             ((volatile un_FLEXRAY_NMV3_t*) 0x405601B8UL)
#define CYREG_FLEXRAY0_MRC              ((volatile un_FLEXRAY_MRC_t*) 0x40560300UL)
#define CYREG_FLEXRAY0_FRF              ((volatile un_FLEXRAY_FRF_t*) 0x40560304UL)
#define CYREG_FLEXRAY0_FRFM             ((volatile un_FLEXRAY_FRFM_t*) 0x40560308UL)
#define CYREG_FLEXRAY0_FCL              ((volatile un_FLEXRAY_FCL_t*) 0x4056030CUL)
#define CYREG_FLEXRAY0_MHDS             ((volatile un_FLEXRAY_MHDS_t*) 0x40560310UL)
#define CYREG_FLEXRAY0_LDTS             ((volatile un_FLEXRAY_LDTS_t*) 0x40560314UL)
#define CYREG_FLEXRAY0_FSR              ((volatile un_FLEXRAY_FSR_t*) 0x40560318UL)
#define CYREG_FLEXRAY0_MHDF             ((volatile un_FLEXRAY_MHDF_t*) 0x4056031CUL)
#define CYREG_FLEXRAY0_TXRQ1            ((volatile un_FLEXRAY_TXRQ1_t*) 0x40560320UL)
#define CYREG_FLEXRAY0_TXRQ2            ((volatile un_FLEXRAY_TXRQ2_t*) 0x40560324UL)
#define CYREG_FLEXRAY0_TXRQ3            ((volatile un_FLEXRAY_TXRQ3_t*) 0x40560328UL)
#define CYREG_FLEXRAY0_TXRQ4            ((volatile un_FLEXRAY_TXRQ4_t*) 0x4056032CUL)
#define CYREG_FLEXRAY0_NDAT1            ((volatile un_FLEXRAY_NDAT1_t*) 0x40560330UL)
#define CYREG_FLEXRAY0_NDAT2            ((volatile un_FLEXRAY_NDAT2_t*) 0x40560334UL)
#define CYREG_FLEXRAY0_NDAT3            ((volatile un_FLEXRAY_NDAT3_t*) 0x40560338UL)
#define CYREG_FLEXRAY0_NDAT4            ((volatile un_FLEXRAY_NDAT4_t*) 0x4056033CUL)
#define CYREG_FLEXRAY0_MBSC1            ((volatile un_FLEXRAY_MBSC1_t*) 0x40560340UL)
#define CYREG_FLEXRAY0_MBSC2            ((volatile un_FLEXRAY_MBSC2_t*) 0x40560344UL)
#define CYREG_FLEXRAY0_MBSC3            ((volatile un_FLEXRAY_MBSC3_t*) 0x40560348UL)
#define CYREG_FLEXRAY0_MBSC4            ((volatile un_FLEXRAY_MBSC4_t*) 0x4056034CUL)
#define CYREG_FLEXRAY0_CREL             ((volatile un_FLEXRAY_CREL_t*) 0x405603F0UL)
#define CYREG_FLEXRAY0_ENDN             ((volatile un_FLEXRAY_ENDN_t*) 0x405603F4UL)
#define CYREG_FLEXRAY0_WRDS0            ((volatile un_FLEXRAY_WRDS_t*) 0x40560400UL)
#define CYREG_FLEXRAY0_WRDS1            ((volatile un_FLEXRAY_WRDS_t*) 0x40560404UL)
#define CYREG_FLEXRAY0_WRDS2            ((volatile un_FLEXRAY_WRDS_t*) 0x40560408UL)
#define CYREG_FLEXRAY0_WRDS3            ((volatile un_FLEXRAY_WRDS_t*) 0x4056040CUL)
#define CYREG_FLEXRAY0_WRDS4            ((volatile un_FLEXRAY_WRDS_t*) 0x40560410UL)
#define CYREG_FLEXRAY0_WRDS5            ((volatile un_FLEXRAY_WRDS_t*) 0x40560414UL)
#define CYREG_FLEXRAY0_WRDS6            ((volatile un_FLEXRAY_WRDS_t*) 0x40560418UL)
#define CYREG_FLEXRAY0_WRDS7            ((volatile un_FLEXRAY_WRDS_t*) 0x4056041CUL)
#define CYREG_FLEXRAY0_WRDS8            ((volatile un_FLEXRAY_WRDS_t*) 0x40560420UL)
#define CYREG_FLEXRAY0_WRDS9            ((volatile un_FLEXRAY_WRDS_t*) 0x40560424UL)
#define CYREG_FLEXRAY0_WRDS10           ((volatile un_FLEXRAY_WRDS_t*) 0x40560428UL)
#define CYREG_FLEXRAY0_WRDS11           ((volatile un_FLEXRAY_WRDS_t*) 0x4056042CUL)
#define CYREG_FLEXRAY0_WRDS12           ((volatile un_FLEXRAY_WRDS_t*) 0x40560430UL)
#define CYREG_FLEXRAY0_WRDS13           ((volatile un_FLEXRAY_WRDS_t*) 0x40560434UL)
#define CYREG_FLEXRAY0_WRDS14           ((volatile un_FLEXRAY_WRDS_t*) 0x40560438UL)
#define CYREG_FLEXRAY0_WRDS15           ((volatile un_FLEXRAY_WRDS_t*) 0x4056043CUL)
#define CYREG_FLEXRAY0_WRDS16           ((volatile un_FLEXRAY_WRDS_t*) 0x40560440UL)
#define CYREG_FLEXRAY0_WRDS17           ((volatile un_FLEXRAY_WRDS_t*) 0x40560444UL)
#define CYREG_FLEXRAY0_WRDS18           ((volatile un_FLEXRAY_WRDS_t*) 0x40560448UL)
#define CYREG_FLEXRAY0_WRDS19           ((volatile un_FLEXRAY_WRDS_t*) 0x4056044CUL)
#define CYREG_FLEXRAY0_WRDS20           ((volatile un_FLEXRAY_WRDS_t*) 0x40560450UL)
#define CYREG_FLEXRAY0_WRDS21           ((volatile un_FLEXRAY_WRDS_t*) 0x40560454UL)
#define CYREG_FLEXRAY0_WRDS22           ((volatile un_FLEXRAY_WRDS_t*) 0x40560458UL)
#define CYREG_FLEXRAY0_WRDS23           ((volatile un_FLEXRAY_WRDS_t*) 0x4056045CUL)
#define CYREG_FLEXRAY0_WRDS24           ((volatile un_FLEXRAY_WRDS_t*) 0x40560460UL)
#define CYREG_FLEXRAY0_WRDS25           ((volatile un_FLEXRAY_WRDS_t*) 0x40560464UL)
#define CYREG_FLEXRAY0_WRDS26           ((volatile un_FLEXRAY_WRDS_t*) 0x40560468UL)
#define CYREG_FLEXRAY0_WRDS27           ((volatile un_FLEXRAY_WRDS_t*) 0x4056046CUL)
#define CYREG_FLEXRAY0_WRDS28           ((volatile un_FLEXRAY_WRDS_t*) 0x40560470UL)
#define CYREG_FLEXRAY0_WRDS29           ((volatile un_FLEXRAY_WRDS_t*) 0x40560474UL)
#define CYREG_FLEXRAY0_WRDS30           ((volatile un_FLEXRAY_WRDS_t*) 0x40560478UL)
#define CYREG_FLEXRAY0_WRDS31           ((volatile un_FLEXRAY_WRDS_t*) 0x4056047CUL)
#define CYREG_FLEXRAY0_WRDS32           ((volatile un_FLEXRAY_WRDS_t*) 0x40560480UL)
#define CYREG_FLEXRAY0_WRDS33           ((volatile un_FLEXRAY_WRDS_t*) 0x40560484UL)
#define CYREG_FLEXRAY0_WRDS34           ((volatile un_FLEXRAY_WRDS_t*) 0x40560488UL)
#define CYREG_FLEXRAY0_WRDS35           ((volatile un_FLEXRAY_WRDS_t*) 0x4056048CUL)
#define CYREG_FLEXRAY0_WRDS36           ((volatile un_FLEXRAY_WRDS_t*) 0x40560490UL)
#define CYREG_FLEXRAY0_WRDS37           ((volatile un_FLEXRAY_WRDS_t*) 0x40560494UL)
#define CYREG_FLEXRAY0_WRDS38           ((volatile un_FLEXRAY_WRDS_t*) 0x40560498UL)
#define CYREG_FLEXRAY0_WRDS39           ((volatile un_FLEXRAY_WRDS_t*) 0x4056049CUL)
#define CYREG_FLEXRAY0_WRDS40           ((volatile un_FLEXRAY_WRDS_t*) 0x405604A0UL)
#define CYREG_FLEXRAY0_WRDS41           ((volatile un_FLEXRAY_WRDS_t*) 0x405604A4UL)
#define CYREG_FLEXRAY0_WRDS42           ((volatile un_FLEXRAY_WRDS_t*) 0x405604A8UL)
#define CYREG_FLEXRAY0_WRDS43           ((volatile un_FLEXRAY_WRDS_t*) 0x405604ACUL)
#define CYREG_FLEXRAY0_WRDS44           ((volatile un_FLEXRAY_WRDS_t*) 0x405604B0UL)
#define CYREG_FLEXRAY0_WRDS45           ((volatile un_FLEXRAY_WRDS_t*) 0x405604B4UL)
#define CYREG_FLEXRAY0_WRDS46           ((volatile un_FLEXRAY_WRDS_t*) 0x405604B8UL)
#define CYREG_FLEXRAY0_WRDS47           ((volatile un_FLEXRAY_WRDS_t*) 0x405604BCUL)
#define CYREG_FLEXRAY0_WRDS48           ((volatile un_FLEXRAY_WRDS_t*) 0x405604C0UL)
#define CYREG_FLEXRAY0_WRDS49           ((volatile un_FLEXRAY_WRDS_t*) 0x405604C4UL)
#define CYREG_FLEXRAY0_WRDS50           ((volatile un_FLEXRAY_WRDS_t*) 0x405604C8UL)
#define CYREG_FLEXRAY0_WRDS51           ((volatile un_FLEXRAY_WRDS_t*) 0x405604CCUL)
#define CYREG_FLEXRAY0_WRDS52           ((volatile un_FLEXRAY_WRDS_t*) 0x405604D0UL)
#define CYREG_FLEXRAY0_WRDS53           ((volatile un_FLEXRAY_WRDS_t*) 0x405604D4UL)
#define CYREG_FLEXRAY0_WRDS54           ((volatile un_FLEXRAY_WRDS_t*) 0x405604D8UL)
#define CYREG_FLEXRAY0_WRDS55           ((volatile un_FLEXRAY_WRDS_t*) 0x405604DCUL)
#define CYREG_FLEXRAY0_WRDS56           ((volatile un_FLEXRAY_WRDS_t*) 0x405604E0UL)
#define CYREG_FLEXRAY0_WRDS57           ((volatile un_FLEXRAY_WRDS_t*) 0x405604E4UL)
#define CYREG_FLEXRAY0_WRDS58           ((volatile un_FLEXRAY_WRDS_t*) 0x405604E8UL)
#define CYREG_FLEXRAY0_WRDS59           ((volatile un_FLEXRAY_WRDS_t*) 0x405604ECUL)
#define CYREG_FLEXRAY0_WRDS60           ((volatile un_FLEXRAY_WRDS_t*) 0x405604F0UL)
#define CYREG_FLEXRAY0_WRDS61           ((volatile un_FLEXRAY_WRDS_t*) 0x405604F4UL)
#define CYREG_FLEXRAY0_WRDS62           ((volatile un_FLEXRAY_WRDS_t*) 0x405604F8UL)
#define CYREG_FLEXRAY0_WRDS63           ((volatile un_FLEXRAY_WRDS_t*) 0x405604FCUL)
#define CYREG_FLEXRAY0_WRHS1            ((volatile un_FLEXRAY_WRHS1_t*) 0x40560500UL)
#define CYREG_FLEXRAY0_WRHS2            ((volatile un_FLEXRAY_WRHS2_t*) 0x40560504UL)
#define CYREG_FLEXRAY0_WRHS3            ((volatile un_FLEXRAY_WRHS3_t*) 0x40560508UL)
#define CYREG_FLEXRAY0_IBCM             ((volatile un_FLEXRAY_IBCM_t*) 0x40560510UL)
#define CYREG_FLEXRAY0_IBCR             ((volatile un_FLEXRAY_IBCR_t*) 0x40560514UL)
#define CYREG_FLEXRAY0_RDDS0            ((volatile un_FLEXRAY_RDDS_t*) 0x40560600UL)
#define CYREG_FLEXRAY0_RDDS1            ((volatile un_FLEXRAY_RDDS_t*) 0x40560604UL)
#define CYREG_FLEXRAY0_RDDS2            ((volatile un_FLEXRAY_RDDS_t*) 0x40560608UL)
#define CYREG_FLEXRAY0_RDDS3            ((volatile un_FLEXRAY_RDDS_t*) 0x4056060CUL)
#define CYREG_FLEXRAY0_RDDS4            ((volatile un_FLEXRAY_RDDS_t*) 0x40560610UL)
#define CYREG_FLEXRAY0_RDDS5            ((volatile un_FLEXRAY_RDDS_t*) 0x40560614UL)
#define CYREG_FLEXRAY0_RDDS6            ((volatile un_FLEXRAY_RDDS_t*) 0x40560618UL)
#define CYREG_FLEXRAY0_RDDS7            ((volatile un_FLEXRAY_RDDS_t*) 0x4056061CUL)
#define CYREG_FLEXRAY0_RDDS8            ((volatile un_FLEXRAY_RDDS_t*) 0x40560620UL)
#define CYREG_FLEXRAY0_RDDS9            ((volatile un_FLEXRAY_RDDS_t*) 0x40560624UL)
#define CYREG_FLEXRAY0_RDDS10           ((volatile un_FLEXRAY_RDDS_t*) 0x40560628UL)
#define CYREG_FLEXRAY0_RDDS11           ((volatile un_FLEXRAY_RDDS_t*) 0x4056062CUL)
#define CYREG_FLEXRAY0_RDDS12           ((volatile un_FLEXRAY_RDDS_t*) 0x40560630UL)
#define CYREG_FLEXRAY0_RDDS13           ((volatile un_FLEXRAY_RDDS_t*) 0x40560634UL)
#define CYREG_FLEXRAY0_RDDS14           ((volatile un_FLEXRAY_RDDS_t*) 0x40560638UL)
#define CYREG_FLEXRAY0_RDDS15           ((volatile un_FLEXRAY_RDDS_t*) 0x4056063CUL)
#define CYREG_FLEXRAY0_RDDS16           ((volatile un_FLEXRAY_RDDS_t*) 0x40560640UL)
#define CYREG_FLEXRAY0_RDDS17           ((volatile un_FLEXRAY_RDDS_t*) 0x40560644UL)
#define CYREG_FLEXRAY0_RDDS18           ((volatile un_FLEXRAY_RDDS_t*) 0x40560648UL)
#define CYREG_FLEXRAY0_RDDS19           ((volatile un_FLEXRAY_RDDS_t*) 0x4056064CUL)
#define CYREG_FLEXRAY0_RDDS20           ((volatile un_FLEXRAY_RDDS_t*) 0x40560650UL)
#define CYREG_FLEXRAY0_RDDS21           ((volatile un_FLEXRAY_RDDS_t*) 0x40560654UL)
#define CYREG_FLEXRAY0_RDDS22           ((volatile un_FLEXRAY_RDDS_t*) 0x40560658UL)
#define CYREG_FLEXRAY0_RDDS23           ((volatile un_FLEXRAY_RDDS_t*) 0x4056065CUL)
#define CYREG_FLEXRAY0_RDDS24           ((volatile un_FLEXRAY_RDDS_t*) 0x40560660UL)
#define CYREG_FLEXRAY0_RDDS25           ((volatile un_FLEXRAY_RDDS_t*) 0x40560664UL)
#define CYREG_FLEXRAY0_RDDS26           ((volatile un_FLEXRAY_RDDS_t*) 0x40560668UL)
#define CYREG_FLEXRAY0_RDDS27           ((volatile un_FLEXRAY_RDDS_t*) 0x4056066CUL)
#define CYREG_FLEXRAY0_RDDS28           ((volatile un_FLEXRAY_RDDS_t*) 0x40560670UL)
#define CYREG_FLEXRAY0_RDDS29           ((volatile un_FLEXRAY_RDDS_t*) 0x40560674UL)
#define CYREG_FLEXRAY0_RDDS30           ((volatile un_FLEXRAY_RDDS_t*) 0x40560678UL)
#define CYREG_FLEXRAY0_RDDS31           ((volatile un_FLEXRAY_RDDS_t*) 0x4056067CUL)
#define CYREG_FLEXRAY0_RDDS32           ((volatile un_FLEXRAY_RDDS_t*) 0x40560680UL)
#define CYREG_FLEXRAY0_RDDS33           ((volatile un_FLEXRAY_RDDS_t*) 0x40560684UL)
#define CYREG_FLEXRAY0_RDDS34           ((volatile un_FLEXRAY_RDDS_t*) 0x40560688UL)
#define CYREG_FLEXRAY0_RDDS35           ((volatile un_FLEXRAY_RDDS_t*) 0x4056068CUL)
#define CYREG_FLEXRAY0_RDDS36           ((volatile un_FLEXRAY_RDDS_t*) 0x40560690UL)
#define CYREG_FLEXRAY0_RDDS37           ((volatile un_FLEXRAY_RDDS_t*) 0x40560694UL)
#define CYREG_FLEXRAY0_RDDS38           ((volatile un_FLEXRAY_RDDS_t*) 0x40560698UL)
#define CYREG_FLEXRAY0_RDDS39           ((volatile un_FLEXRAY_RDDS_t*) 0x4056069CUL)
#define CYREG_FLEXRAY0_RDDS40           ((volatile un_FLEXRAY_RDDS_t*) 0x405606A0UL)
#define CYREG_FLEXRAY0_RDDS41           ((volatile un_FLEXRAY_RDDS_t*) 0x405606A4UL)
#define CYREG_FLEXRAY0_RDDS42           ((volatile un_FLEXRAY_RDDS_t*) 0x405606A8UL)
#define CYREG_FLEXRAY0_RDDS43           ((volatile un_FLEXRAY_RDDS_t*) 0x405606ACUL)
#define CYREG_FLEXRAY0_RDDS44           ((volatile un_FLEXRAY_RDDS_t*) 0x405606B0UL)
#define CYREG_FLEXRAY0_RDDS45           ((volatile un_FLEXRAY_RDDS_t*) 0x405606B4UL)
#define CYREG_FLEXRAY0_RDDS46           ((volatile un_FLEXRAY_RDDS_t*) 0x405606B8UL)
#define CYREG_FLEXRAY0_RDDS47           ((volatile un_FLEXRAY_RDDS_t*) 0x405606BCUL)
#define CYREG_FLEXRAY0_RDDS48           ((volatile un_FLEXRAY_RDDS_t*) 0x405606C0UL)
#define CYREG_FLEXRAY0_RDDS49           ((volatile un_FLEXRAY_RDDS_t*) 0x405606C4UL)
#define CYREG_FLEXRAY0_RDDS50           ((volatile un_FLEXRAY_RDDS_t*) 0x405606C8UL)
#define CYREG_FLEXRAY0_RDDS51           ((volatile un_FLEXRAY_RDDS_t*) 0x405606CCUL)
#define CYREG_FLEXRAY0_RDDS52           ((volatile un_FLEXRAY_RDDS_t*) 0x405606D0UL)
#define CYREG_FLEXRAY0_RDDS53           ((volatile un_FLEXRAY_RDDS_t*) 0x405606D4UL)
#define CYREG_FLEXRAY0_RDDS54           ((volatile un_FLEXRAY_RDDS_t*) 0x405606D8UL)
#define CYREG_FLEXRAY0_RDDS55           ((volatile un_FLEXRAY_RDDS_t*) 0x405606DCUL)
#define CYREG_FLEXRAY0_RDDS56           ((volatile un_FLEXRAY_RDDS_t*) 0x405606E0UL)
#define CYREG_FLEXRAY0_RDDS57           ((volatile un_FLEXRAY_RDDS_t*) 0x405606E4UL)
#define CYREG_FLEXRAY0_RDDS58           ((volatile un_FLEXRAY_RDDS_t*) 0x405606E8UL)
#define CYREG_FLEXRAY0_RDDS59           ((volatile un_FLEXRAY_RDDS_t*) 0x405606ECUL)
#define CYREG_FLEXRAY0_RDDS60           ((volatile un_FLEXRAY_RDDS_t*) 0x405606F0UL)
#define CYREG_FLEXRAY0_RDDS61           ((volatile un_FLEXRAY_RDDS_t*) 0x405606F4UL)
#define CYREG_FLEXRAY0_RDDS62           ((volatile un_FLEXRAY_RDDS_t*) 0x405606F8UL)
#define CYREG_FLEXRAY0_RDDS63           ((volatile un_FLEXRAY_RDDS_t*) 0x405606FCUL)
#define CYREG_FLEXRAY0_RDHS1            ((volatile un_FLEXRAY_RDHS1_t*) 0x40560700UL)
#define CYREG_FLEXRAY0_RDHS2            ((volatile un_FLEXRAY_RDHS2_t*) 0x40560704UL)
#define CYREG_FLEXRAY0_RDHS3            ((volatile un_FLEXRAY_RDHS3_t*) 0x40560708UL)
#define CYREG_FLEXRAY0_MBS              ((volatile un_FLEXRAY_MBS_t*) 0x4056070CUL)
#define CYREG_FLEXRAY0_OBCM             ((volatile un_FLEXRAY_OBCM_t*) 0x40560710UL)
#define CYREG_FLEXRAY0_OBCR             ((volatile un_FLEXRAY_OBCR_t*) 0x40560714UL)
#define CYREG_FLEXRAY0_WRHS1_MIR2       ((volatile un_FLEXRAY_WRHS1_MIR2_t*) 0x40560BF0UL)
#define CYREG_FLEXRAY0_WRHS2_MIR2       ((volatile un_FLEXRAY_WRHS2_MIR2_t*) 0x40560BF4UL)
#define CYREG_FLEXRAY0_WRHS3_MIR2       ((volatile un_FLEXRAY_WRHS3_MIR2_t*) 0x40560BF8UL)
#define CYREG_FLEXRAY0_WRDS_MIR0        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C00UL)
#define CYREG_FLEXRAY0_WRDS_MIR1        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C04UL)
#define CYREG_FLEXRAY0_WRDS_MIR2        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C08UL)
#define CYREG_FLEXRAY0_WRDS_MIR3        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C0CUL)
#define CYREG_FLEXRAY0_WRDS_MIR4        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C10UL)
#define CYREG_FLEXRAY0_WRDS_MIR5        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C14UL)
#define CYREG_FLEXRAY0_WRDS_MIR6        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C18UL)
#define CYREG_FLEXRAY0_WRDS_MIR7        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C1CUL)
#define CYREG_FLEXRAY0_WRDS_MIR8        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C20UL)
#define CYREG_FLEXRAY0_WRDS_MIR9        ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C24UL)
#define CYREG_FLEXRAY0_WRDS_MIR10       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C28UL)
#define CYREG_FLEXRAY0_WRDS_MIR11       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C2CUL)
#define CYREG_FLEXRAY0_WRDS_MIR12       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C30UL)
#define CYREG_FLEXRAY0_WRDS_MIR13       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C34UL)
#define CYREG_FLEXRAY0_WRDS_MIR14       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C38UL)
#define CYREG_FLEXRAY0_WRDS_MIR15       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C3CUL)
#define CYREG_FLEXRAY0_WRDS_MIR16       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C40UL)
#define CYREG_FLEXRAY0_WRDS_MIR17       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C44UL)
#define CYREG_FLEXRAY0_WRDS_MIR18       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C48UL)
#define CYREG_FLEXRAY0_WRDS_MIR19       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C4CUL)
#define CYREG_FLEXRAY0_WRDS_MIR20       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C50UL)
#define CYREG_FLEXRAY0_WRDS_MIR21       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C54UL)
#define CYREG_FLEXRAY0_WRDS_MIR22       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C58UL)
#define CYREG_FLEXRAY0_WRDS_MIR23       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C5CUL)
#define CYREG_FLEXRAY0_WRDS_MIR24       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C60UL)
#define CYREG_FLEXRAY0_WRDS_MIR25       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C64UL)
#define CYREG_FLEXRAY0_WRDS_MIR26       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C68UL)
#define CYREG_FLEXRAY0_WRDS_MIR27       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C6CUL)
#define CYREG_FLEXRAY0_WRDS_MIR28       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C70UL)
#define CYREG_FLEXRAY0_WRDS_MIR29       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C74UL)
#define CYREG_FLEXRAY0_WRDS_MIR30       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C78UL)
#define CYREG_FLEXRAY0_WRDS_MIR31       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C7CUL)
#define CYREG_FLEXRAY0_WRDS_MIR32       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C80UL)
#define CYREG_FLEXRAY0_WRDS_MIR33       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C84UL)
#define CYREG_FLEXRAY0_WRDS_MIR34       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C88UL)
#define CYREG_FLEXRAY0_WRDS_MIR35       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C8CUL)
#define CYREG_FLEXRAY0_WRDS_MIR36       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C90UL)
#define CYREG_FLEXRAY0_WRDS_MIR37       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C94UL)
#define CYREG_FLEXRAY0_WRDS_MIR38       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C98UL)
#define CYREG_FLEXRAY0_WRDS_MIR39       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560C9CUL)
#define CYREG_FLEXRAY0_WRDS_MIR40       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CA0UL)
#define CYREG_FLEXRAY0_WRDS_MIR41       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CA4UL)
#define CYREG_FLEXRAY0_WRDS_MIR42       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CA8UL)
#define CYREG_FLEXRAY0_WRDS_MIR43       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CACUL)
#define CYREG_FLEXRAY0_WRDS_MIR44       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CB0UL)
#define CYREG_FLEXRAY0_WRDS_MIR45       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CB4UL)
#define CYREG_FLEXRAY0_WRDS_MIR46       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CB8UL)
#define CYREG_FLEXRAY0_WRDS_MIR47       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CBCUL)
#define CYREG_FLEXRAY0_WRDS_MIR48       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CC0UL)
#define CYREG_FLEXRAY0_WRDS_MIR49       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CC4UL)
#define CYREG_FLEXRAY0_WRDS_MIR50       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CC8UL)
#define CYREG_FLEXRAY0_WRDS_MIR51       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CCCUL)
#define CYREG_FLEXRAY0_WRDS_MIR52       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CD0UL)
#define CYREG_FLEXRAY0_WRDS_MIR53       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CD4UL)
#define CYREG_FLEXRAY0_WRDS_MIR54       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CD8UL)
#define CYREG_FLEXRAY0_WRDS_MIR55       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CDCUL)
#define CYREG_FLEXRAY0_WRDS_MIR56       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CE0UL)
#define CYREG_FLEXRAY0_WRDS_MIR57       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CE4UL)
#define CYREG_FLEXRAY0_WRDS_MIR58       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CE8UL)
#define CYREG_FLEXRAY0_WRDS_MIR59       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CECUL)
#define CYREG_FLEXRAY0_WRDS_MIR60       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CF0UL)
#define CYREG_FLEXRAY0_WRDS_MIR61       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CF4UL)
#define CYREG_FLEXRAY0_WRDS_MIR62       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CF8UL)
#define CYREG_FLEXRAY0_WRDS_MIR63       ((volatile un_FLEXRAY_WRDS_MIR_t*) 0x40560CFCUL)
#define CYREG_FLEXRAY0_WRHS1_MIR        ((volatile un_FLEXRAY_WRHS1_MIR_t*) 0x40560D00UL)
#define CYREG_FLEXRAY0_WRHS2_MIR        ((volatile un_FLEXRAY_WRHS2_MIR_t*) 0x40560D04UL)
#define CYREG_FLEXRAY0_WRHS3_MIR        ((volatile un_FLEXRAY_WRHS3_MIR_t*) 0x40560D08UL)
#define CYREG_FLEXRAY0_IBCM_MIR         ((volatile un_FLEXRAY_IBCM_MIR_t*) 0x40560D10UL)
#define CYREG_FLEXRAY0_IBCR_MIR         ((volatile un_FLEXRAY_IBCR_MIR_t*) 0x40560D14UL)
#define CYREG_FLEXRAY0_RDHS1_MIR2       ((volatile un_FLEXRAY_RDHS1_MIR2_t*) 0x40560DF0UL)
#define CYREG_FLEXRAY0_RDHS2_MIR2       ((volatile un_FLEXRAY_RDHS2_MIR2_t*) 0x40560DF4UL)
#define CYREG_FLEXRAY0_RDHS3_MIR2       ((volatile un_FLEXRAY_RDHS3_MIR2_t*) 0x40560DF8UL)
#define CYREG_FLEXRAY0_MBS_MIR2         ((volatile un_FLEXRAY_MBS_MIR2_t*) 0x40560DFCUL)
#define CYREG_FLEXRAY0_RDDS_MIR0        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E00UL)
#define CYREG_FLEXRAY0_RDDS_MIR1        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E04UL)
#define CYREG_FLEXRAY0_RDDS_MIR2        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E08UL)
#define CYREG_FLEXRAY0_RDDS_MIR3        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E0CUL)
#define CYREG_FLEXRAY0_RDDS_MIR4        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E10UL)
#define CYREG_FLEXRAY0_RDDS_MIR5        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E14UL)
#define CYREG_FLEXRAY0_RDDS_MIR6        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E18UL)
#define CYREG_FLEXRAY0_RDDS_MIR7        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E1CUL)
#define CYREG_FLEXRAY0_RDDS_MIR8        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E20UL)
#define CYREG_FLEXRAY0_RDDS_MIR9        ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E24UL)
#define CYREG_FLEXRAY0_RDDS_MIR10       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E28UL)
#define CYREG_FLEXRAY0_RDDS_MIR11       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E2CUL)
#define CYREG_FLEXRAY0_RDDS_MIR12       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E30UL)
#define CYREG_FLEXRAY0_RDDS_MIR13       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E34UL)
#define CYREG_FLEXRAY0_RDDS_MIR14       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E38UL)
#define CYREG_FLEXRAY0_RDDS_MIR15       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E3CUL)
#define CYREG_FLEXRAY0_RDDS_MIR16       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E40UL)
#define CYREG_FLEXRAY0_RDDS_MIR17       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E44UL)
#define CYREG_FLEXRAY0_RDDS_MIR18       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E48UL)
#define CYREG_FLEXRAY0_RDDS_MIR19       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E4CUL)
#define CYREG_FLEXRAY0_RDDS_MIR20       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E50UL)
#define CYREG_FLEXRAY0_RDDS_MIR21       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E54UL)
#define CYREG_FLEXRAY0_RDDS_MIR22       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E58UL)
#define CYREG_FLEXRAY0_RDDS_MIR23       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E5CUL)
#define CYREG_FLEXRAY0_RDDS_MIR24       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E60UL)
#define CYREG_FLEXRAY0_RDDS_MIR25       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E64UL)
#define CYREG_FLEXRAY0_RDDS_MIR26       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E68UL)
#define CYREG_FLEXRAY0_RDDS_MIR27       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E6CUL)
#define CYREG_FLEXRAY0_RDDS_MIR28       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E70UL)
#define CYREG_FLEXRAY0_RDDS_MIR29       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E74UL)
#define CYREG_FLEXRAY0_RDDS_MIR30       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E78UL)
#define CYREG_FLEXRAY0_RDDS_MIR31       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E7CUL)
#define CYREG_FLEXRAY0_RDDS_MIR32       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E80UL)
#define CYREG_FLEXRAY0_RDDS_MIR33       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E84UL)
#define CYREG_FLEXRAY0_RDDS_MIR34       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E88UL)
#define CYREG_FLEXRAY0_RDDS_MIR35       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E8CUL)
#define CYREG_FLEXRAY0_RDDS_MIR36       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E90UL)
#define CYREG_FLEXRAY0_RDDS_MIR37       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E94UL)
#define CYREG_FLEXRAY0_RDDS_MIR38       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E98UL)
#define CYREG_FLEXRAY0_RDDS_MIR39       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560E9CUL)
#define CYREG_FLEXRAY0_RDDS_MIR40       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EA0UL)
#define CYREG_FLEXRAY0_RDDS_MIR41       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EA4UL)
#define CYREG_FLEXRAY0_RDDS_MIR42       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EA8UL)
#define CYREG_FLEXRAY0_RDDS_MIR43       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EACUL)
#define CYREG_FLEXRAY0_RDDS_MIR44       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EB0UL)
#define CYREG_FLEXRAY0_RDDS_MIR45       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EB4UL)
#define CYREG_FLEXRAY0_RDDS_MIR46       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EB8UL)
#define CYREG_FLEXRAY0_RDDS_MIR47       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EBCUL)
#define CYREG_FLEXRAY0_RDDS_MIR48       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EC0UL)
#define CYREG_FLEXRAY0_RDDS_MIR49       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EC4UL)
#define CYREG_FLEXRAY0_RDDS_MIR50       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EC8UL)
#define CYREG_FLEXRAY0_RDDS_MIR51       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560ECCUL)
#define CYREG_FLEXRAY0_RDDS_MIR52       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560ED0UL)
#define CYREG_FLEXRAY0_RDDS_MIR53       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560ED4UL)
#define CYREG_FLEXRAY0_RDDS_MIR54       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560ED8UL)
#define CYREG_FLEXRAY0_RDDS_MIR55       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EDCUL)
#define CYREG_FLEXRAY0_RDDS_MIR56       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EE0UL)
#define CYREG_FLEXRAY0_RDDS_MIR57       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EE4UL)
#define CYREG_FLEXRAY0_RDDS_MIR58       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EE8UL)
#define CYREG_FLEXRAY0_RDDS_MIR59       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EECUL)
#define CYREG_FLEXRAY0_RDDS_MIR60       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EF0UL)
#define CYREG_FLEXRAY0_RDDS_MIR61       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EF4UL)
#define CYREG_FLEXRAY0_RDDS_MIR62       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EF8UL)
#define CYREG_FLEXRAY0_RDDS_MIR63       ((volatile un_FLEXRAY_RDDS_MIR_t*) 0x40560EFCUL)
#define CYREG_FLEXRAY0_RDHS1_MIR        ((volatile un_FLEXRAY_RDHS1_MIR_t*) 0x40560F00UL)
#define CYREG_FLEXRAY0_RDHS2_MIR        ((volatile un_FLEXRAY_RDHS2_MIR_t*) 0x40560F04UL)
#define CYREG_FLEXRAY0_RDHS3_MIR        ((volatile un_FLEXRAY_RDHS3_MIR_t*) 0x40560F08UL)
#define CYREG_FLEXRAY0_MBS_MIR          ((volatile un_FLEXRAY_MBS_MIR_t*) 0x40560F0CUL)
#define CYREG_FLEXRAY0_OBCM_MIR         ((volatile un_FLEXRAY_OBCM_MIR_t*) 0x40560F10UL)
#define CYREG_FLEXRAY0_OBCR_MIR         ((volatile un_FLEXRAY_OBCR_MIR_t*) 0x40560F14UL)

#endif /* _CYREG_FLEXRAY_H_ */


/* [] END OF FILE */
