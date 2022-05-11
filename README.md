# riscv
Experimental Berkeley RISC-V Assembly Emulation Setup on Windows Subsystem for Linux Debian and QEMU

![moonshot](/moonshot.png)

### Disclaimer: These instructions are intended for advanced users. Please proceed at your own ~~riscv~~.

### Debian WSL: https://apps.microsoft.com/store/detail/debian/9MSVKQC78PK6?hl=en-gb&gl=GB
### Prerequisite Instructions: https://wiki.debian.org/RISC-V#Qemu
In Debian WSL:
```
apt update
apt install qemu-system-misc git make
git clone https://github.com/themindvirus/riscv
cd riscv/debian-wsl-x86
make # This will attempt to boot OpenSBI inside QEMU
```
In Debian QEMU RISCV:
```
# The default password for root is your password for WSL when you made your chroot
# Some packages will not be installed such as make, git, build-essential etc...
# You may get confused between Debian WSL and Debian RISCV running inside WSL QEMU
# You will need to use nano to manually write the files found in debian-wsl-x86-qemu-riscv
# These assembly programs will let you access the full potential of new chip architectures
# without disrupting the host system

mkdir asmtest
cd asmtest
nano main.S
make
# ./app # Example build commands you may encounter
shutdown # To safely return from Debian QEMU RISCV to Debian WSL (no power off if run twice)
```
A lot of the operational complexity involved in putting this system together \
is absolutely unnecessary and should be made a lot simpler for people \
to understand how RISC-V and other assembly standards can be made useful.

![screenshot](/screenshot.png)
![riscvtestpassasm](/riscvtestpassasm.png)

