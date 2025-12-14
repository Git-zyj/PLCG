#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28422;
signed char var_6 = (signed char)12;
unsigned short var_7 = (unsigned short)26347;
unsigned char var_8 = (unsigned char)162;
unsigned int var_11 = 1943237277U;
unsigned long long int var_17 = 1656386291197723100ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = 7691026091993485456LL;
unsigned short var_20 = (unsigned short)8837;
void init() {
}

void checksum() {
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
