extern void printf();
extern void _lockup();
extern int _riscv(int a0, int a1, int a2);
//extern int _riscv(void (a0)(void), int a1);
void _void() { printf("[VOID]\n"); }

#define N(method) #method, method

int main()
{
    int a0 = 0;
    int a1 = 0;
    printf("[INFO]: %s: 0x%08lX\n", N(_lockup));
    printf("[INFO]: %s: 0x%08lX\n", N(_riscv));
    printf("[INFO]: %s: 0x%08lX\n", N(_void));
    printf("[INFO]: %s: 0x%08lX\n", N(main));
    _void();
    int R = _riscv(a0, a1, 1);
    printf("[TEST]: %d << %d => %llu (%llu)\n", a0, a1, R);
    return 0;
}
