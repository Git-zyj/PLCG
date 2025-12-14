#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
short var_1 = (short)31712;
unsigned short var_3 = (unsigned short)26584;
short var_7 = (short)10494;
short var_8 = (short)-4901;
unsigned long long int var_9 = 7193426173186989941ULL;
short var_10 = (short)16032;
int var_15 = 99403097;
int zero = 0;
int var_18 = 1701181052;
long long int var_19 = 4203299535265071023LL;
unsigned char var_20 = (unsigned char)104;
unsigned short var_21 = (unsigned short)36121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
