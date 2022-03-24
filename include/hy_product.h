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

void HyProductCreate(void);
void HyProductDestroy(void);

const char *HyProductGetName(void);

#ifdef __cplusplus
}
#endif

#endif

