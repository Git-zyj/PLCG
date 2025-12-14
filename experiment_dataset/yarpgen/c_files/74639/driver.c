#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4012464320574591364ULL;
unsigned int var_1 = 1638969178U;
unsigned int var_2 = 305653692U;
int var_3 = 461144898;
signed char var_4 = (signed char)90;
int var_5 = 1308663593;
unsigned char var_8 = (unsigned char)79;
int zero = 0;
int var_11 = -1975281645;
int var_12 = -75676105;
unsigned char var_13 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
