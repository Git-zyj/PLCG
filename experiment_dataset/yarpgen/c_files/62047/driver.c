#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3728787652U;
unsigned long long int var_4 = 2634415302701981371ULL;
unsigned char var_5 = (unsigned char)214;
int zero = 0;
unsigned long long int var_11 = 4423355974525819608ULL;
unsigned long long int var_12 = 11135365719092893596ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
