#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)134;
unsigned short var_7 = (unsigned short)35815;
int var_10 = 668154175;
unsigned short var_11 = (unsigned short)57004;
short var_12 = (short)-8769;
int zero = 0;
unsigned int var_14 = 3195417869U;
int var_15 = 1705840193;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
