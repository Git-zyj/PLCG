#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1815761434U;
unsigned short var_2 = (unsigned short)7676;
unsigned char var_4 = (unsigned char)76;
short var_7 = (short)-26308;
unsigned short var_12 = (unsigned short)61805;
int zero = 0;
unsigned long long int var_13 = 12898515241264219577ULL;
unsigned int var_14 = 2633746412U;
signed char var_15 = (signed char)65;
unsigned long long int var_16 = 1010713353169044244ULL;
signed char var_17 = (signed char)69;
long long int var_18 = 2239355621911562541LL;
unsigned short var_19 = (unsigned short)43072;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
