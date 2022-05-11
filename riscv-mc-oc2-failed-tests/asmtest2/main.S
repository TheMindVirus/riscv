.org 0x100
.global main
.global _lockup
.global _riscv
//followed by _void nonsensically

_lockup:
  beq x0, x0, 0
  //return badly defined

_test:
  ld x1, x10, 0

_riscv:
  srl x10, x10, x11
  beq x0, x12, 0
