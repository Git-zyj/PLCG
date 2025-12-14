#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)250;
_Bool var_2 = (_Bool)0;
short var_4 = (short)17769;
_Bool var_7 = (_Bool)1;
short var_8 = (short)28203;
short var_9 = (short)29023;
int var_11 = -2022678671;
unsigned long long int var_14 = 3966767242927610919ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
