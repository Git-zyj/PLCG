#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7841998219722279579LL;
signed char var_7 = (signed char)33;
int var_9 = 384475315;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 16279025582295302143ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)91;
int var_20 = 1904167405;
signed char var_21 = (signed char)-24;
signed char var_22 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
