#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)144;
short var_4 = (short)24171;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 14764975500956466557ULL;
int zero = 0;
unsigned long long int var_11 = 449204665388021234ULL;
short var_12 = (short)-13552;
unsigned short var_13 = (unsigned short)65394;
void init() {
}

void checksum() {
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
