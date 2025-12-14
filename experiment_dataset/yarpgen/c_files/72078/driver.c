#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned int var_2 = 1275238750U;
short var_3 = (short)6174;
unsigned short var_5 = (unsigned short)17910;
signed char var_9 = (signed char)94;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_13 = -5217423616724477824LL;
signed char var_14 = (signed char)73;
long long int var_15 = 6803085410920580820LL;
unsigned short var_16 = (unsigned short)24612;
unsigned char var_17 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
