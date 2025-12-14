#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5535;
signed char var_4 = (signed char)6;
int var_6 = -13473777;
unsigned long long int var_7 = 2120396454607837636ULL;
short var_10 = (short)-32610;
int zero = 0;
unsigned long long int var_12 = 9446081562725044075ULL;
long long int var_13 = -6907859723833994223LL;
unsigned char var_14 = (unsigned char)159;
int var_15 = 1096242080;
unsigned int var_16 = 1280087868U;
unsigned char arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)166 : (unsigned char)234;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
