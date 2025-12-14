#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)241;
unsigned long long int var_1 = 13829660909147835494ULL;
int var_2 = 2070586485;
signed char var_4 = (signed char)-40;
int var_6 = 1396030955;
unsigned char var_7 = (unsigned char)229;
unsigned int var_9 = 3415359633U;
_Bool var_10 = (_Bool)1;
long long int var_14 = -1013393859885893722LL;
short var_16 = (short)-11201;
int zero = 0;
long long int var_19 = 9055208367140887753LL;
unsigned long long int var_20 = 16230945952770698859ULL;
int var_21 = -1765663915;
int var_22 = -866662883;
unsigned int var_23 = 1888727843U;
short var_24 = (short)-30841;
signed char var_25 = (signed char)1;
int arr_2 [19] [19] ;
unsigned char arr_3 [19] [19] ;
unsigned char arr_4 [19] ;
unsigned short arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 898682996;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)65334;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
