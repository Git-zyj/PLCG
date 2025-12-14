#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2583407256U;
signed char var_2 = (signed char)127;
unsigned short var_4 = (unsigned short)59066;
unsigned int var_5 = 3965256228U;
unsigned long long int var_6 = 9611651733244619847ULL;
short var_7 = (short)-5605;
unsigned int var_8 = 4262406391U;
unsigned char var_9 = (unsigned char)56;
unsigned long long int var_10 = 16753949811420093210ULL;
signed char var_11 = (signed char)-79;
int zero = 0;
unsigned int var_13 = 2226396151U;
signed char var_14 = (signed char)28;
unsigned int var_15 = 4152786923U;
unsigned short var_16 = (unsigned short)19774;
unsigned short var_17 = (unsigned short)55464;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
