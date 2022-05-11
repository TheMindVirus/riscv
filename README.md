# riscv
Experimental Berkeley RISC-V Assembly Emulation Setup on Windows Subsystem for Linux Debian and QEMU

## About RISC-V: https://riscv.org/

**\\/ Minecraft Forge MultiMC5 OpenComputersII Sedna Linux Moonshot**
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
# You may get confused between Debian WSL and Debian RISCV running inside WSL QEMU
# You will need to use nano to manually write the files found in debian-wsl-x86-qemu-riscv
# You may encounter odd glitches with text not displaying properly and arrow keys not working
# Some packages will not be installed such as make, git, build-essential etc...
# These assembly programs will let you access the full potential of new chip architectures
# without disrupting the host system

mkdir asmtest
cd asmtest
nano main.S
make
# ./app # Example build commands you may encounter
# shutdown # To safely return from Debian QEMU RISCV to Debian WSL (no power off if run twice)
```
A lot of the operational complexity involved in putting this system together \
is absolutely unnecessary and should be made a lot simpler for people \
to understand how RISC-V and other assembly standards can be made useful.

### RISC-V Instruction Set Specification 2019: https://riscv.org/wp-content/uploads/2019/06/riscv-spec.pdf

![screenshot](/screenshot.png)
![riscvtestpassasm](/riscvtestpassasm.png)

### OpenComputersII
This experiment was originally tested with partial interpreter failure on OpenComputersII, \
a Minecraft Mod featuring Programmable Redstone Computers, Sedna Linux, GNU Nano and TinyCC \
for work-in-progress RISCV64 one-time-compilation to build more dynamic frameworks such as micropython

A `@micropython.asm_riscv` decorator was missing and is not recommended, as was a recommended python module. \
Several packages including riscv-gcc was missing, so the available TinyCC compiler was used instead.

The `jalr` instruction was found to be missing as well as all references to the `pc` (program counter). \
This made it very difficult to see how risc-v could be made useful and should not be learnt from.

**Developmental Repositories:**
 - https://github.com/fnuecke/oc2/blob/3407e84d53db9869e15f8a909d4fcc2a153579be/src/main/scripts/bin/export.lua
 - https://github.com/TinyCC/tinycc/blob/748e38ad991c595787f02f018232ae08c85753a6/riscv64-asm.c#L575

### Powershell
![powershell](/powershell.png)
### Windows Terminal
![googleio](/googleio.png)
### Google I/O: https://www.youtube.com/watch?v=qBkyU1TJKDg
