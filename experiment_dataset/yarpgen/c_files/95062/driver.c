#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15919587135802175989ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)99;
unsigned long long int var_7 = 7311447849396509532ULL;
unsigned long long int var_14 = 16996043526092968223ULL;
unsigned char var_16 = (unsigned char)209;
unsigned long long int var_18 = 4817130702294948305ULL;
int zero = 0;
signed char var_19 = (signed char)-95;
unsigned char var_20 = (unsigned char)123;
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
