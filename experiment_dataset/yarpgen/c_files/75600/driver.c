#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
unsigned char var_1 = (unsigned char)227;
unsigned int var_5 = 825493291U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 1611506387776661553ULL;
unsigned char var_10 = (unsigned char)96;
signed char var_12 = (signed char)13;
signed char var_13 = (signed char)72;
signed char var_14 = (signed char)-100;
int zero = 0;
short var_17 = (short)23449;
unsigned short var_18 = (unsigned short)40574;
short var_19 = (short)31433;
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
