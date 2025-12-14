#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)191;
int var_5 = -1050445182;
signed char var_6 = (signed char)46;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)255;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-36;
unsigned char var_19 = (unsigned char)64;
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
