#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15647;
unsigned char var_1 = (unsigned char)165;
long long int var_3 = -4704539677929006161LL;
long long int var_6 = -7570705144161176836LL;
short var_10 = (short)-27770;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2873241084U;
unsigned int var_17 = 4043828868U;
unsigned int var_18 = 2110767565U;
unsigned int var_19 = 2164796439U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
