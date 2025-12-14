#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4970969876590018038ULL;
unsigned char var_6 = (unsigned char)93;
unsigned long long int var_7 = 17057121646905301566ULL;
int var_8 = 1835040639;
unsigned int var_15 = 1502305021U;
int zero = 0;
unsigned char var_17 = (unsigned char)171;
unsigned short var_18 = (unsigned short)4668;
int var_19 = -243955964;
signed char var_20 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
