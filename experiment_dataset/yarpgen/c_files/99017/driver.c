#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-27458;
unsigned int var_6 = 2462957083U;
unsigned short var_11 = (unsigned short)29662;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-2659;
signed char var_16 = (signed char)45;
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
