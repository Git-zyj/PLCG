#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)45;
short var_2 = (short)-32577;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 4039304751U;
unsigned long long int var_5 = 6233481573088332095ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)213;
unsigned char var_9 = (unsigned char)106;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = -1179112222;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)4377;
signed char var_15 = (signed char)-5;
int var_16 = 831119934;
unsigned long long int var_17 = 16997817208360892665ULL;
unsigned char var_18 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
