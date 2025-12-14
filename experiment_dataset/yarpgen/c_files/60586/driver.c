#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
unsigned int var_2 = 84040994U;
unsigned char var_5 = (unsigned char)44;
unsigned char var_7 = (unsigned char)227;
int zero = 0;
unsigned char var_11 = (unsigned char)45;
unsigned char var_12 = (unsigned char)253;
unsigned int var_13 = 179483063U;
unsigned int var_14 = 2007649802U;
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
