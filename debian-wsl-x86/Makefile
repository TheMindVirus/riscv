all:
	qemu-system-riscv64 -nographic -k en-us -machine virt -m 1G \
	 -bios opensbi.elf -kernel uboot.elf \
	 -append "console=ttyS0 rw root=/dev/vda1" \
	 -device virtio-blk-device,drive=hd0 -drive file=rootfs.img,format=raw,id=hd0 \
	 -device virtio-net-device,netdev=usernet -netdev user,id=usernet,hostfwd=tcp::22222-:22
