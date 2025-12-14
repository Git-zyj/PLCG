#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61571;
_Bool var_5 = (_Bool)0;
short var_7 = (short)5927;
int var_8 = 564443072;
int var_13 = 1227082285;
int zero = 0;
short var_16 = (short)-109;
int var_17 = -2143613315;
unsigned int var_18 = 1897215404U;
unsigned int var_19 = 3994007242U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
