#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)231;
int var_7 = -281090255;
unsigned int var_9 = 2640443773U;
signed char var_10 = (signed char)24;
short var_11 = (short)-18553;
int zero = 0;
unsigned int var_12 = 1434435587U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1843598699507721086ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9537395266925025697ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
