#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)32;
short var_3 = (short)-18589;
int var_4 = 465421897;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)210;
unsigned char var_7 = (unsigned char)204;
unsigned short var_9 = (unsigned short)24335;
signed char var_12 = (signed char)14;
unsigned char var_14 = (unsigned char)70;
unsigned char var_15 = (unsigned char)0;
int var_16 = -316595604;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)36429;
unsigned char var_20 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
