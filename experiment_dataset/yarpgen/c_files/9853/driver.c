#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7237157266811788591LL;
unsigned long long int var_4 = 730658594005159950ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 1576271146U;
int var_12 = 1953674485;
int var_13 = 17139859;
int zero = 0;
long long int var_15 = 1542456362138043969LL;
unsigned short var_16 = (unsigned short)55746;
short var_17 = (short)-6484;
long long int var_18 = 3090819109294006035LL;
signed char var_19 = (signed char)-31;
short var_20 = (short)-11070;
unsigned int arr_0 [12] [12] ;
short arr_3 [12] ;
int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 2580969479U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)30535;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 1556082666;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
