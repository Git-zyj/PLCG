#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19278;
signed char var_2 = (signed char)-94;
unsigned int var_5 = 1923688555U;
signed char var_6 = (signed char)-18;
unsigned char var_7 = (unsigned char)30;
short var_9 = (short)-7564;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-5434;
int zero = 0;
signed char var_13 = (signed char)-36;
unsigned char var_14 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
