# ===============================================================
# 
# Release under GPLv-3.0.
# 
# @file    Makefile.am
# @brief   
# @author  gnsyxiang <gnsyxiang@163.com>
# @date    21/03 2022 17:26
# @version v0.0.1
# 
# @since    note
# @note     note
# 
#     change log:
#     NO.     Author              Date            Modified
#     00      zhenquan.qiu        21/03 2022      create the file
# 
#     last modified: 21/03 2022 17:26
# ===============================================================

path_3rd_lib := ../../3rd_lib

img: pre_img pack_img
	@echo "make img successful"

pre_img: copy_3rd_lib_bin copy_3rd_lib_lib copy_3rd_lib_res
	@rm -rf app/lib/*.a; \
		rm -rf app/lib/*.la

copy_3rd_lib_bin:
	@echo "copy 3rd_lib bin"; \
		cp -ar $(path_3rd_lib)/bin/hy_template_test ./app/bin

copy_3rd_lib_lib:
	@echo "copy 3rd_lib lib"; \
		cp -ar $(path_3rd_lib)/lib/*.so* ./app/lib; \
		$(STRIP) ./app/lib/*

copy_3rd_lib_res:
	@echo "copy 3rd_lib res"

pack_img: pack_sqfs
	@echo "pack img"

pack_sqfs:
	@echo "pack app sqfs"


