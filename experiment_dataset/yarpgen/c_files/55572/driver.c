#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
unsigned int var_3 = 1135762533U;
unsigned long long int var_4 = 16836038971500714462ULL;
unsigned long long int var_7 = 8850013217256213185ULL;
unsigned int var_8 = 1018242510U;
int zero = 0;
short var_11 = (short)1250;
int var_12 = -1898920944;
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
