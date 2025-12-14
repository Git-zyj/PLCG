#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12558;
unsigned short var_1 = (unsigned short)21178;
unsigned char var_3 = (unsigned char)75;
unsigned long long int var_6 = 10952682590353653779ULL;
unsigned short var_8 = (unsigned short)52192;
unsigned char var_10 = (unsigned char)85;
unsigned int var_11 = 580457790U;
unsigned int var_13 = 598940765U;
unsigned long long int var_15 = 14316909803611986821ULL;
unsigned int var_16 = 308310490U;
int zero = 0;
signed char var_18 = (signed char)109;
long long int var_19 = -4265502282295031701LL;
unsigned short var_20 = (unsigned short)45319;
unsigned int var_21 = 2569829038U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
