#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
signed char var_1 = (signed char)-29;
signed char var_3 = (signed char)-71;
unsigned long long int var_4 = 17459017641138173082ULL;
unsigned int var_5 = 3818111603U;
signed char var_7 = (signed char)84;
unsigned int var_10 = 1331806931U;
int zero = 0;
unsigned long long int var_13 = 13954333373940152047ULL;
unsigned int var_14 = 3482439014U;
signed char var_15 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
