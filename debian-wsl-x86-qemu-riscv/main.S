.org 0x100
.global main
.global _lockup
.global _riscv
//followed by _void nonsensically

_lockup:
  beq x0, x0, 0
  //return badly defined

_riscv:
  add x10, x10, x11
  //sll x10, x10, x11
  jalr x0, 0(x1) //return