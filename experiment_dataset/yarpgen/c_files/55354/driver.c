#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1858145405U;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)41618;
unsigned int var_5 = 357933709U;
signed char var_8 = (signed char)96;
int var_9 = 104929506;
int var_11 = -1678999796;
signed char var_12 = (signed char)-91;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)31210;
short var_18 = (short)-29880;
unsigned short var_19 = (unsigned short)59199;
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
