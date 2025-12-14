#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3294245990U;
unsigned short var_1 = (unsigned short)44761;
_Bool var_3 = (_Bool)0;
short var_6 = (short)26401;
unsigned char var_7 = (unsigned char)201;
unsigned char var_8 = (unsigned char)99;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-26872;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)32;
unsigned char var_19 = (unsigned char)101;
unsigned int var_20 = 2150950109U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
