#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)230;
unsigned char var_4 = (unsigned char)182;
int var_5 = -1287408123;
int var_6 = 1300403853;
unsigned int var_10 = 3474792601U;
unsigned char var_11 = (unsigned char)158;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4509931657027050765ULL;
unsigned long long int var_16 = 146578153550965461ULL;
unsigned long long int var_17 = 14642541562841242324ULL;
int zero = 0;
long long int var_19 = 1827956584358709140LL;
long long int var_20 = 7638708754945736814LL;
short var_21 = (short)6319;
unsigned char var_22 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
