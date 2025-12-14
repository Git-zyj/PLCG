#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1581427139;
short var_5 = (short)17386;
unsigned int var_15 = 1982457341U;
unsigned char var_16 = (unsigned char)74;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 382281707U;
unsigned int var_21 = 206313673U;
unsigned int var_22 = 2378488976U;
void init() {
}

void checksum() {
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
