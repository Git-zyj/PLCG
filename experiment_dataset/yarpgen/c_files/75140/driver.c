#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27641;
short var_5 = (short)-23155;
unsigned long long int var_7 = 9078731500230649453ULL;
unsigned int var_11 = 3990930291U;
int zero = 0;
short var_12 = (short)28565;
long long int var_13 = -8274251101180724071LL;
long long int var_14 = -2642629287551755207LL;
unsigned int var_15 = 1656989559U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
