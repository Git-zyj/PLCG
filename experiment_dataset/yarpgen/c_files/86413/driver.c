#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9671953283414594100ULL;
short var_6 = (short)-21814;
unsigned short var_7 = (unsigned short)63291;
unsigned int var_10 = 148798809U;
unsigned short var_17 = (unsigned short)13830;
unsigned char var_18 = (unsigned char)161;
int zero = 0;
unsigned int var_20 = 374096531U;
unsigned int var_21 = 1860879753U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
