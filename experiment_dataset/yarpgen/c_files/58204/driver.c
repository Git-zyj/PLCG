#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = -1890583504;
unsigned short var_8 = (unsigned short)63979;
long long int var_10 = 8115154842810385262LL;
int zero = 0;
int var_12 = 1760468580;
long long int var_13 = 8682797047498378024LL;
long long int var_14 = -1906874473673509536LL;
signed char var_15 = (signed char)-41;
signed char var_16 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
