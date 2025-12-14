#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16619373911561107379ULL;
signed char var_4 = (signed char)43;
unsigned char var_5 = (unsigned char)96;
unsigned int var_7 = 3596852175U;
int zero = 0;
unsigned long long int var_13 = 3783665564090410571ULL;
int var_14 = -1124154258;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
