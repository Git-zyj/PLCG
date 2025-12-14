#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5258948448633334883LL;
signed char var_1 = (signed char)35;
unsigned short var_4 = (unsigned short)57951;
int var_8 = 493520648;
int var_9 = 1175649453;
unsigned char var_10 = (unsigned char)233;
long long int var_12 = -2871170981397795890LL;
int var_14 = -1439887535;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)63489;
long long int var_18 = -4873958851987351869LL;
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
