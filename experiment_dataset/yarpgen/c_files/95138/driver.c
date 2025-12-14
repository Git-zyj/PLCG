#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)161;
unsigned char var_11 = (unsigned char)191;
unsigned int var_13 = 3246969892U;
int var_14 = -1218021229;
unsigned int var_18 = 1819767571U;
int zero = 0;
unsigned char var_20 = (unsigned char)69;
signed char var_21 = (signed char)-79;
unsigned char var_22 = (unsigned char)100;
unsigned char var_23 = (unsigned char)11;
short var_24 = (short)972;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
