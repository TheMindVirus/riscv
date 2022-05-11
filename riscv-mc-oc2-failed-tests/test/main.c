//#include <stdio.h> //This is missing? Implicit Declaration Used

int main()
{
    printf("%s: TEST 0x%016llX\n", "hello world!", 0xDEADBEEFBAADF00D);
    //register x0 = 0x0;
    //register x1 = 0x0;
    int src = 1;
    int dst = 0;
    asm
    (
        "ld %1 %0"
    //        "sb %1, %0\n"
    //    "add t0, t1\n"
    //    "add t0, t1, t2\n"
    //    "mov %1, %0\n"
     //   "add $1, %0\n"
        : "=r" (dst)
        : "r" (src)
    );
    printf("TEST2: %d\n", dst);
    return 0;
}
