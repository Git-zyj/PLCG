#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1427615250;
int var_1 = 226718686;
int var_4 = -15010948;
unsigned long long int var_5 = 9706592792683148710ULL;
unsigned short var_6 = (unsigned short)8894;
unsigned char var_7 = (unsigned char)12;
signed char var_8 = (signed char)6;
int var_9 = -1533495387;
unsigned short var_11 = (unsigned short)54574;
int var_12 = -550605832;
int zero = 0;
unsigned long long int var_15 = 4427272809662447242ULL;
short var_16 = (short)-7098;
int var_17 = 681307670;
void init() {
}

void checksum() {
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
