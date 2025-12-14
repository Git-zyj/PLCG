#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 797500816U;
signed char var_1 = (signed char)-13;
unsigned int var_3 = 2918190816U;
short var_4 = (short)13041;
short var_6 = (short)12078;
short var_8 = (short)-16720;
int zero = 0;
signed char var_12 = (signed char)80;
short var_13 = (short)-2231;
long long int var_14 = -6760120337075639380LL;
unsigned char var_15 = (unsigned char)141;
short var_16 = (short)11706;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
