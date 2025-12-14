#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
unsigned short var_3 = (unsigned short)52796;
unsigned short var_4 = (unsigned short)13184;
unsigned long long int var_5 = 17707452821887790648ULL;
unsigned int var_6 = 1303639599U;
signed char var_7 = (signed char)50;
unsigned int var_8 = 1246109934U;
unsigned char var_9 = (unsigned char)132;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)5;
signed char var_15 = (signed char)-68;
int zero = 0;
unsigned short var_16 = (unsigned short)47456;
_Bool var_17 = (_Bool)1;
short var_18 = (short)17113;
unsigned short var_19 = (unsigned short)14847;
void init() {
}

void checksum() {
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
