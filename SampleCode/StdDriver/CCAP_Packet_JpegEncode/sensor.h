/**************************************************************************//**
 * @file     sensor.h
 * @version  V1.00
 * $Revision: 2 $
 * $Date: 14/05/29 1:14p $
 * @brief    Sensor header file
 *
 * @note
 * Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *
 ******************************************************************************/
#ifndef __CCAP_SENSOR_H_
#define __CCAP_SENSOR_H_

#include "NuMicro.h"

int InitOV7725_VGA_YUV422(void);
#define OV7725SensorPolarity         (CCAP_PAR_VSP_HIGH | CCAP_PAR_HSP_LOW  | CCAP_PAR_PCLKP_HIGH)
#define OV7725DataFormatAndOrder (CCAP_PAR_INDATORD_UYVY | CCAP_PAR_INFMT_YUV422 | CCAP_PAR_OUTFMT_YUV422)

int InitNT99141_VGA_YUV422(void);
#define NT99141SensorPolarity         (CCAP_PAR_VSP_LOW | CCAP_PAR_HSP_LOW  | CCAP_PAR_PCLKP_HIGH)
#define NT99141DataFormatAndOrder (CCAP_PAR_INDATORD_YUYV | CCAP_PAR_INFMT_YUV422 | CCAP_PAR_OUTFMT_YUV422)

#endif
