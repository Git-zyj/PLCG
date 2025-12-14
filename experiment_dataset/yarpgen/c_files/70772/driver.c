#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21260;
unsigned long long int var_3 = 3269210670332152748ULL;
int var_4 = 2144455658;
int var_6 = -286014730;
int var_12 = -584240697;
int zero = 0;
unsigned long long int var_13 = 18193175563007398274ULL;
unsigned long long int var_14 = 3802976035817117577ULL;
unsigned int var_15 = 2697678912U;
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
