#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9093760229217500215LL;
unsigned short var_1 = (unsigned short)53499;
long long int var_2 = -7882942568319480092LL;
short var_3 = (short)31743;
unsigned short var_4 = (unsigned short)7968;
unsigned short var_5 = (unsigned short)19286;
unsigned char var_6 = (unsigned char)208;
long long int var_7 = 2097184026134543098LL;
long long int var_9 = -5466364422684673455LL;
unsigned short var_10 = (unsigned short)48783;
unsigned char var_11 = (unsigned char)225;
int zero = 0;
long long int var_12 = -2817730137123602816LL;
signed char var_13 = (signed char)68;
unsigned int var_14 = 4177544567U;
unsigned int var_15 = 2795456502U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
