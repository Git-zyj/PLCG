#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10911;
short var_1 = (short)7739;
int var_2 = -1027780946;
short var_3 = (short)2339;
int var_4 = 764879496;
short var_7 = (short)29555;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 1570611211;
long long int var_12 = 7698634598627675172LL;
long long int var_13 = -858737572531079017LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
