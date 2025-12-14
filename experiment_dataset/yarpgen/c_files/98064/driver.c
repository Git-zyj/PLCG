#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)45210;
unsigned int var_6 = 2592290786U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3653499671U;
unsigned char var_13 = (unsigned char)205;
int var_14 = -704028988;
int zero = 0;
unsigned int var_17 = 128791456U;
int var_18 = -2145109711;
unsigned int var_19 = 3580640317U;
void init() {
}

void checksum() {
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
