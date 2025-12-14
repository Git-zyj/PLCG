#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24774;
unsigned short var_6 = (unsigned short)8359;
unsigned char var_7 = (unsigned char)15;
int var_8 = 855042280;
int var_14 = 1230470658;
unsigned short var_15 = (unsigned short)40883;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-7072;
int zero = 0;
unsigned char var_18 = (unsigned char)132;
unsigned long long int var_19 = 6263972133376853944ULL;
unsigned int var_20 = 1863069907U;
unsigned int var_21 = 2678134055U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
