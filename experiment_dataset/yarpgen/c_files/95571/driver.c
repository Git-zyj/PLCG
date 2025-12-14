#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65036;
short var_1 = (short)-12517;
short var_5 = (short)699;
int var_6 = 879603460;
short var_12 = (short)-9923;
unsigned short var_13 = (unsigned short)36935;
int zero = 0;
int var_16 = -12912780;
short var_17 = (short)3310;
unsigned short var_18 = (unsigned short)46741;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
