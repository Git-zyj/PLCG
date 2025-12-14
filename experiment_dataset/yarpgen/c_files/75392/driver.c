#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13284;
_Bool var_3 = (_Bool)0;
short var_4 = (short)27899;
unsigned char var_5 = (unsigned char)56;
int var_6 = -1211365625;
unsigned short var_7 = (unsigned short)40705;
unsigned long long int var_11 = 5469313984880231747ULL;
unsigned int var_14 = 406245125U;
short var_16 = (short)-20176;
signed char var_17 = (signed char)-125;
unsigned int var_18 = 1824359519U;
int zero = 0;
unsigned int var_19 = 1283369602U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
