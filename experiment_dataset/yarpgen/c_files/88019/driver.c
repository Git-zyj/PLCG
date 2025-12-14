#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25461;
unsigned int var_3 = 1361442785U;
unsigned long long int var_4 = 15838438140117251925ULL;
short var_7 = (short)-25676;
unsigned int var_8 = 30643477U;
unsigned short var_9 = (unsigned short)16874;
unsigned int var_10 = 592980367U;
int var_12 = 1621214397;
short var_13 = (short)32091;
long long int var_14 = -6589672298266963237LL;
unsigned long long int var_16 = 13138977451280410636ULL;
int zero = 0;
unsigned int var_20 = 2197900832U;
short var_21 = (short)-9192;
signed char var_22 = (signed char)22;
unsigned long long int var_23 = 15920818393185273407ULL;
int var_24 = -1703801643;
unsigned int arr_0 [23] ;
signed char arr_1 [23] ;
unsigned char arr_4 [23] ;
unsigned long long int arr_5 [23] [23] ;
unsigned long long int arr_2 [23] ;
_Bool arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3190014257U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)194 : (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 17947739958425754666ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 6309684250835888904ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
