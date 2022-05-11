#!/bin/sh

echo "[INFO]: Compiling RISCV64 Application..."
tcc -bench main.S main.c -o app
tcc -c main.S -o main.o
echo "[INFO]: Done!"

exit 0
