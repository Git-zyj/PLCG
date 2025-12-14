#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-100;
int var_11 = 486767543;
unsigned short var_12 = (unsigned short)45834;
int zero = 0;
unsigned short var_14 = (unsigned short)19147;
signed char var_15 = (signed char)43;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)64141;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
