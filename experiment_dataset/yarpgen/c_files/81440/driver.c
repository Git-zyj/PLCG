#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4119060341U;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 1702845532U;
unsigned char var_14 = (unsigned char)104;
int zero = 0;
unsigned char var_19 = (unsigned char)45;
signed char var_20 = (signed char)-83;
unsigned long long int var_21 = 8902693518923999166ULL;
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
