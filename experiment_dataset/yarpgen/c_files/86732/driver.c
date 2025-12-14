#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)176;
unsigned char var_6 = (unsigned char)233;
signed char var_14 = (signed char)83;
int zero = 0;
short var_15 = (short)-20250;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-8;
unsigned short var_18 = (unsigned short)8045;
short var_19 = (short)184;
unsigned short var_20 = (unsigned short)47144;
signed char var_21 = (signed char)-90;
unsigned long long int var_22 = 4645599212228427287ULL;
unsigned char var_23 = (unsigned char)93;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1843928305505364532ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
