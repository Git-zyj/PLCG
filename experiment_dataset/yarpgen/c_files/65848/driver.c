#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
signed char var_1 = (signed char)-86;
unsigned short var_6 = (unsigned short)15853;
int zero = 0;
unsigned long long int var_11 = 5958298400916818233ULL;
unsigned char var_12 = (unsigned char)62;
int var_13 = 1639798256;
unsigned int var_14 = 3469120232U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
