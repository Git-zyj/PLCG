#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 574780058U;
unsigned long long int var_3 = 13598060921275791502ULL;
signed char var_4 = (signed char)117;
unsigned char var_5 = (unsigned char)60;
short var_6 = (short)-18661;
short var_8 = (short)-25972;
short var_10 = (short)-20884;
int zero = 0;
signed char var_14 = (signed char)-115;
unsigned char var_15 = (unsigned char)143;
int var_16 = 2136190104;
signed char var_17 = (signed char)69;
unsigned long long int var_18 = 15842286143181066296ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
