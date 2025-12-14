#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-16;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)17231;
unsigned char var_8 = (unsigned char)218;
int var_9 = -578942366;
int var_11 = 322599333;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)2176;
unsigned short var_15 = (unsigned short)18570;
int zero = 0;
unsigned long long int var_17 = 15105691656145674851ULL;
signed char var_18 = (signed char)-127;
short var_19 = (short)20127;
unsigned short var_20 = (unsigned short)59775;
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
