#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)17975;
signed char var_3 = (signed char)0;
unsigned long long int var_5 = 12622744987398661357ULL;
signed char var_6 = (signed char)37;
short var_8 = (short)-25039;
int var_9 = -472365559;
unsigned long long int var_10 = 11021204283987497016ULL;
int zero = 0;
signed char var_13 = (signed char)31;
unsigned char var_14 = (unsigned char)173;
long long int var_15 = 3920689830047122044LL;
long long int var_16 = -5490114166185519714LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
