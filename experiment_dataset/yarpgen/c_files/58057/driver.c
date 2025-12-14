#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6528541916724574890ULL;
unsigned int var_4 = 1013930574U;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 4025126797U;
int zero = 0;
unsigned int var_10 = 1816008603U;
short var_11 = (short)-8653;
unsigned int var_12 = 2096951268U;
unsigned char var_13 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
