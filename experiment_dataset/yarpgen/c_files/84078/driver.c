#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned int var_2 = 791995952U;
int var_3 = -1140480648;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1511795076U;
unsigned char var_13 = (unsigned char)207;
unsigned long long int var_14 = 9867566012124372983ULL;
unsigned long long int var_17 = 8751336427993497220ULL;
unsigned char var_18 = (unsigned char)94;
int zero = 0;
int var_19 = 1022801036;
unsigned char var_20 = (unsigned char)200;
unsigned char var_21 = (unsigned char)53;
unsigned int var_22 = 229165163U;
int var_23 = 304622251;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
