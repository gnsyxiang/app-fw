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

_3rd_lib_path = "../../3rd_lib"
_tools_path = "../../tools"
_app_path = "./app"
_param_path = "./param"
_test_mnt_path = "/mnt/test_ext4"

_app_img = "app.sqfs.xz"
_param_img = "param.ext4"
_param_img_size = 6M

img: pre_img pack_img
	@echo "make img successful"

pre_img: copy_3rd_lib_bin copy_3rd_lib_lib copy_3rd_lib_res
	@rm -rf $(_app_path)/lib/*.a; \
		rm -rf $(_app_path)/lib/*.la

copy_3rd_lib_bin:
	@echo "copy 3rd_lib bin"

copy_3rd_lib_lib:
	@echo "copy 3rd_lib lib"; \
		cp -ar $(_3rd_lib_path)/lib/*.so* $(_app_path)/lib; \
		rm -rf $(_app_path)/lib/*.a; \
		rm -rf $(_app_path)/lib/*.la; \
		$(STRIP) $(_app_path)/lib/*

copy_3rd_lib_res:
	@echo "copy 3rd_lib res"

pack_img: pack_sqfs pack_ext4

pack_sqfs:
	@echo "pack app sqfs"; \
		mksquashfs $(_app_path) $(_app_img) -comp xz -all-root

pack_ext4:
	@echo "pack param ext4"; \
		dd if=/dev/zero of=$(_param_img) bs=$(_param_img_size) count=1; \
	_loop_dev=$(shell losetup --find --show $(_param_img)); \
	if [ $$? != 0 ]; then \
		echo "losetup $$${_loop_dev} $(_param_img) failed!"; \
		exit -1; \
	fi; \
	echo $${_loop_dev} ; \
	mkfs.ext4 -b 2k $${_loop_dev}; \
	if [ ! -d $(_test_mnt_path) ]; then \
		mkdir $(_test_mnt_path); \
	fi; \
	mount -t ext4 $${_loop_dev} $(_test_mnt_path); \
	if [ $$? != 0 ];then \
		echo "mount -t ext4 $${_loop_dev} $(_test_mnt_path) failed!" \
		exit -1; \
	fi; \
	cp $(_param_path)/*  $(_test_mnt_path) / -fra; \
	umount $(_test_mnt_path); \
	losetup -d $${_loop_dev}

