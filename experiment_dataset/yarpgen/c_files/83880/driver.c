#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1312267773;
int var_1 = 1343545644;
unsigned long long int var_2 = 5812207278272430208ULL;
signed char var_3 = (signed char)-105;
unsigned long long int var_4 = 6744754167180253559ULL;
unsigned char var_5 = (unsigned char)183;
unsigned char var_6 = (unsigned char)69;
unsigned short var_7 = (unsigned short)45214;
short var_8 = (short)-26371;
long long int var_9 = -8162398387261271155LL;
unsigned char var_10 = (unsigned char)235;
unsigned int var_11 = 733350748U;
unsigned char var_12 = (unsigned char)191;
int zero = 0;
unsigned int var_13 = 1013061137U;
long long int var_14 = -8404018471175813875LL;
unsigned int var_15 = 3617651057U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
