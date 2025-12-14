#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9049606862626346056ULL;
unsigned char var_3 = (unsigned char)114;
unsigned short var_4 = (unsigned short)39058;
unsigned int var_6 = 2221665247U;
unsigned char var_7 = (unsigned char)70;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)23872;
int zero = 0;
short var_19 = (short)-7603;
unsigned long long int var_20 = 18153066494196720960ULL;
unsigned long long int var_21 = 8559617007253908510ULL;
void init() {
}

void checksum() {
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
