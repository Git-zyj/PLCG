#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14319;
unsigned long long int var_2 = 3111863015319551850ULL;
unsigned char var_3 = (unsigned char)116;
unsigned long long int var_5 = 7224170459065624978ULL;
unsigned short var_6 = (unsigned short)56171;
int var_7 = 357707798;
unsigned char var_8 = (unsigned char)126;
unsigned short var_9 = (unsigned short)1539;
unsigned int var_10 = 2163972775U;
int zero = 0;
unsigned int var_11 = 414633359U;
signed char var_12 = (signed char)98;
unsigned int var_13 = 3172363464U;
unsigned short var_14 = (unsigned short)61022;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
