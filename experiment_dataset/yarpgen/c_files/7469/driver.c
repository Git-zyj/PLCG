#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)28425;
unsigned long long int var_4 = 17701211677650305084ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)44395;
unsigned long long int var_10 = 5984888410814263096ULL;
unsigned long long int var_12 = 18443709827079723652ULL;
unsigned int var_14 = 2518308427U;
unsigned int var_16 = 1220135102U;
int zero = 0;
short var_18 = (short)21611;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)88;
_Bool var_21 = (_Bool)0;
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
