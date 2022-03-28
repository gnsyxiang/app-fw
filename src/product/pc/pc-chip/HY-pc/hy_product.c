/**
 * 
 * Release under GPLv-3.0.
 * 
 * @file    hy_product.c
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    28/03 2022 14:34
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        28/03 2022      create the file
 * 
 *     last modified: 28/03 2022 14:34
 */
#include <stdio.h>

#include "hy_hal/hy_type.h"
#include "hy_hal/hy_assert.h"
#include "hy_hal/hy_mem.h"
#include "hy_hal/hy_string.h"
#include "hy_hal/hy_log.h"

#include "hy_utils/hy_json.h"

#include "hy_product.h"
#include "hy_path.h"

typedef struct {
    void *root;
} _product_context_s;

static _product_context_s context;

const char *HyProductGetName(void)
{
    return HyJsonGetItemStr("NULL", context.root, "name");
}

HyProductId_e HyProductGetId(void)
{
    return HyJsonGetItemInt(-1, context.root, "id");
}

void HyProductDestroy(void)
{
    HyJsonDestroy(context.root);
}

void HyProductCreate(void)
{
    do {
        HY_MEMSET(&context, sizeof(context));

        context.root = HyJsonFileCreate(HY_PRODUCT_PATH);
        if (!context.root) {
            LOGE("HyJsonFileCreate failed \n");
            break;
        }

        return;
    } while (0);

    HyProductDestroy();
}

