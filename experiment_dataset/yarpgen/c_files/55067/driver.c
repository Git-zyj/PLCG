#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 16562305688749999327ULL;
signed char var_5 = (signed char)-1;
long long int var_6 = -8764311744904501604LL;
unsigned char var_8 = (unsigned char)24;
int zero = 0;
short var_14 = (short)-2468;
signed char var_15 = (signed char)(-127 - 1);
signed char var_16 = (signed char)-52;
unsigned char var_17 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
