#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1865727509U;
int var_8 = -1137413721;
signed char var_11 = (signed char)-90;
int zero = 0;
signed char var_12 = (signed char)-4;
int var_13 = -532087811;
long long int var_14 = 2226124105782396709LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
