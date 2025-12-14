#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned char var_1 = (unsigned char)87;
unsigned char var_2 = (unsigned char)233;
signed char var_4 = (signed char)-7;
signed char var_5 = (signed char)30;
signed char var_6 = (signed char)-69;
unsigned int var_8 = 519061660U;
unsigned long long int var_9 = 16565249400828429357ULL;
_Bool var_10 = (_Bool)0;
int var_11 = 316084097;
int zero = 0;
unsigned int var_12 = 2255180655U;
unsigned short var_13 = (unsigned short)22303;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
