#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15893914607315628054ULL;
signed char var_7 = (signed char)-24;
int var_8 = -504439207;
int zero = 0;
unsigned long long int var_14 = 10022521793837494731ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 617778182U;
int var_17 = -1371370365;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
