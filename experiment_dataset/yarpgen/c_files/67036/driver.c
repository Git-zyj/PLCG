#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1201983219;
unsigned char var_6 = (unsigned char)191;
unsigned int var_7 = 1268589004U;
unsigned char var_8 = (unsigned char)174;
int zero = 0;
int var_15 = 1934033460;
unsigned char var_16 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
