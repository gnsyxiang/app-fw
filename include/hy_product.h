/**
 *
 * Release under GPLv-3.0.
 * 
 * @file    hy_product.h
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    24/03 2022 17:03
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        24/03 2022      create the file
 * 
 *     last modified: 24/03 2022 17:03
 */
#ifndef __APP_FW_INCLUDE_HY_PRODUCT_H_
#define __APP_FW_INCLUDE_HY_PRODUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#define HY_PRODUCT_NAME_LEN_MAX (32)

typedef enum {
    // pc->pc_chip
    HY_PRODUCT_ID_PC_PC_CHIP = 0x0,
    HY_PRODUCT_ID_PC_PC_CHIP_HY_PC,

    // eeasytech->SV823
    HY_PRODUCT_ID_EEASYTECH_SV823 = 0x1000,
    HY_PRODUCT_ID_EEASYTECH_SV823_HY_8608,
    HY_PRODUCT_ID_EEASYTECH_SV823_HY_8608E,
    HY_PRODUCT_ID_EEASYTECH_SV823_HY_8608EV2,
} HyProductId_e;

void HyProductCreate(void);
void HyProductDestroy(void);

const char *HyProductGetName(void);
HyProductId_e HyProductGetId(void);

#ifdef __cplusplus
}
#endif

#endif

