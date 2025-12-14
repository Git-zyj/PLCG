#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_5 = (signed char)-69;
unsigned char var_10 = (unsigned char)126;
signed char var_12 = (signed char)-49;
unsigned char var_16 = (unsigned char)109;
int zero = 0;
unsigned int var_19 = 1811896878U;
unsigned long long int var_20 = 12081486206714654612ULL;
signed char var_21 = (signed char)12;
unsigned long long int var_22 = 342846524363150926ULL;
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
