#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
signed char var_2 = (signed char)-49;
unsigned int var_4 = 2620920212U;
unsigned short var_8 = (unsigned short)30398;
signed char var_9 = (signed char)-112;
unsigned int var_10 = 3031052124U;
signed char var_11 = (signed char)50;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-12672;
unsigned short var_14 = (unsigned short)28014;
unsigned short var_15 = (unsigned short)60330;
signed char var_16 = (signed char)17;
int zero = 0;
short var_18 = (short)25113;
unsigned int var_19 = 1371713446U;
unsigned int var_20 = 2095580563U;
unsigned short var_21 = (unsigned short)60659;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
