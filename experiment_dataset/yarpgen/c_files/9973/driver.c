#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9090413767935036431LL;
unsigned long long int var_4 = 14778629084718159546ULL;
int var_6 = -1242745685;
int var_10 = -9539675;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-26;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 12748621928362504898ULL;
int var_18 = 2072917277;
unsigned int var_19 = 2701874970U;
unsigned long long int var_20 = 15631492714246083483ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
