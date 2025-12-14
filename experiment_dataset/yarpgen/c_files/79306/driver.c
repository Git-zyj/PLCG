#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9880680194080908167ULL;
int var_3 = 1362444290;
unsigned long long int var_8 = 15195725803206260438ULL;
signed char var_9 = (signed char)-31;
int var_10 = 782346809;
short var_12 = (short)13440;
int zero = 0;
signed char var_19 = (signed char)-15;
unsigned int var_20 = 1169934871U;
short var_21 = (short)-9297;
long long int var_22 = -2867547007721758805LL;
unsigned char var_23 = (unsigned char)211;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)150;
long long int var_26 = -7603033662209814567LL;
unsigned int var_27 = 2507991143U;
long long int arr_0 [19] ;
long long int arr_1 [19] ;
unsigned char arr_5 [19] ;
unsigned char arr_6 [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
unsigned int arr_13 [21] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -6653814048423641982LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -6215896000384542077LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 18033491217372859612ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 3383405001U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 15152987460743811419ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
