#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10632929080627537156ULL;
unsigned char var_5 = (unsigned char)184;
unsigned int var_7 = 1269431879U;
int var_14 = 778985406;
signed char var_16 = (signed char)114;
int zero = 0;
int var_18 = 1100204212;
unsigned long long int var_19 = 14591177512490907590ULL;
unsigned int var_20 = 2454294096U;
unsigned char var_21 = (unsigned char)56;
short var_22 = (short)-30986;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
