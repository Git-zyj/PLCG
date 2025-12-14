#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-1158;
unsigned char var_3 = (unsigned char)144;
long long int var_8 = 6402962538674059740LL;
signed char var_10 = (signed char)-55;
int var_13 = 774201783;
_Bool var_15 = (_Bool)1;
long long int var_16 = 7694881477064806262LL;
int zero = 0;
unsigned int var_17 = 3116382938U;
signed char var_18 = (signed char)62;
void init() {
}

void checksum() {
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
