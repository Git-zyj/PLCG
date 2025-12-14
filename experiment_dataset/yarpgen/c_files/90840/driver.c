#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-32460;
int var_8 = -198343897;
unsigned short var_11 = (unsigned short)30492;
unsigned int var_16 = 4286305387U;
int zero = 0;
int var_17 = -828828650;
unsigned short var_18 = (unsigned short)49477;
short var_19 = (short)21553;
unsigned char var_20 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
