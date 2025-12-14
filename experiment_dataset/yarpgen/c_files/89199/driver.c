#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_4 = -308529398;
unsigned char var_5 = (unsigned char)226;
unsigned char var_9 = (unsigned char)113;
unsigned short var_12 = (unsigned short)15596;
int zero = 0;
signed char var_15 = (signed char)4;
unsigned int var_16 = 3022428030U;
int var_17 = -916280489;
signed char var_18 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
