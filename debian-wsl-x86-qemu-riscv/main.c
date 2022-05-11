#include <stdio.h>
extern void _lockup();
extern int _riscv(int a0, int a1);
void _void() { printf("[VOID]\n"); }

#define N(method) #method, method

int main()
{
    int a0 = 1;
    int a1 = 2;
    printf("[INFO]: %s: 0x%016lX\n", N(_lockup));
    printf("[INFO]: %s: 0x%016lX\n", N(_riscv));
    printf("[INFO]: %s: 0x%016lX\n", N(_void));
    printf("[INFO]: %s: 0x%016lX\n", N(main));
    _void();
    int R = _riscv(a0, a1);
    printf("[TEST]: ADD: %d + %d = %d\n", a0, a1, R);
    return 0;
}