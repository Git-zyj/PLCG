#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8155880910966977899ULL;
long long int var_7 = 1596484008198750044LL;
signed char var_8 = (signed char)78;
short var_11 = (short)-28430;
short var_15 = (short)-5453;
int zero = 0;
long long int var_16 = -6687032087081775463LL;
short var_17 = (short)-24425;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
