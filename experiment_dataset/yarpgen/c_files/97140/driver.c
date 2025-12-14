#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7385585497777089097LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 14820915804424240767ULL;
unsigned short var_7 = (unsigned short)30272;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2437539710U;
unsigned long long int var_11 = 7762227305261742114ULL;
int var_12 = 992362589;
int zero = 0;
int var_17 = -1751928512;
int var_18 = -530159281;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
