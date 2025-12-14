#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned int var_6 = 3036216780U;
int var_9 = 682217726;
signed char var_11 = (signed char)-94;
short var_12 = (short)-8163;
unsigned int var_13 = 822602659U;
unsigned int var_16 = 3169140867U;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)18519;
unsigned int var_20 = 34353812U;
void init() {
}

void checksum() {
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
