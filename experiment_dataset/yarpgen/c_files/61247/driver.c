#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 905103920U;
unsigned short var_14 = (unsigned short)17333;
int zero = 0;
unsigned char var_16 = (unsigned char)109;
unsigned long long int var_17 = 10479839865748359056ULL;
unsigned int var_18 = 3978460706U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
