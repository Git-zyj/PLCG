#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6252996270770176275LL;
short var_1 = (short)-6353;
short var_3 = (short)-28743;
long long int var_4 = -2029407043567825953LL;
long long int var_6 = -6518887104366531369LL;
long long int var_8 = -2799928483557199999LL;
signed char var_11 = (signed char)-101;
unsigned short var_12 = (unsigned short)1658;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)190;
int var_18 = 1121177667;
int zero = 0;
long long int var_19 = -8573539128446411500LL;
unsigned long long int var_20 = 18417400669898707431ULL;
unsigned char var_21 = (unsigned char)212;
unsigned int var_22 = 1583764680U;
signed char var_23 = (signed char)-52;
unsigned long long int var_24 = 3336041873232260143ULL;
long long int var_25 = 1667501208077564380LL;
unsigned char var_26 = (unsigned char)30;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 16792754324078549992ULL;
unsigned short var_29 = (unsigned short)34075;
_Bool arr_0 [18] [18] ;
unsigned long long int arr_3 [18] [18] [18] ;
long long int arr_7 [18] [18] ;
unsigned short arr_9 [24] [24] ;
unsigned int arr_12 [13] [13] ;
unsigned short arr_13 [13] ;
short arr_16 [13] [13] ;
unsigned short arr_8 [18] ;
unsigned long long int arr_11 [24] ;
unsigned char arr_18 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6206635953517617123ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -3186611461923246006LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)4320;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 1578285507U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned short)24985;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (short)5267;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned short)14934;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 15355018497353101338ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)111 : (unsigned char)209;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
