#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)18195;
short var_8 = (short)-27304;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)10274;
long long int var_15 = 1043134014596109682LL;
short var_16 = (short)30035;
int var_17 = 1964170758;
int zero = 0;
signed char var_18 = (signed char)-60;
int var_19 = 897930571;
unsigned int var_20 = 805034343U;
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
