#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8140;
unsigned int var_1 = 2851933968U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)7958;
signed char var_6 = (signed char)-58;
unsigned char var_9 = (unsigned char)8;
signed char var_10 = (signed char)-95;
unsigned char var_11 = (unsigned char)0;
int zero = 0;
signed char var_12 = (signed char)-97;
signed char var_13 = (signed char)23;
unsigned char var_14 = (unsigned char)32;
short var_15 = (short)17292;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
