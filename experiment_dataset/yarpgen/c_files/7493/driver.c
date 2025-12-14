#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14408052155495915204ULL;
short var_12 = (short)30151;
int zero = 0;
unsigned int var_16 = 364495962U;
int var_17 = -868307340;
unsigned short var_18 = (unsigned short)37690;
unsigned int var_19 = 3469604071U;
int var_20 = 1498913571;
long long int var_21 = 1136249201960843379LL;
short var_22 = (short)7643;
unsigned char var_23 = (unsigned char)13;
unsigned int var_24 = 271244445U;
int var_25 = -379845333;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)40992;
short var_28 = (short)-5727;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 3939958537U;
unsigned int var_31 = 3200660359U;
int var_32 = 1064563608;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 2293509409U;
_Bool var_35 = (_Bool)0;
unsigned int var_36 = 3720617830U;
unsigned long long int var_37 = 10476145476577468388ULL;
_Bool var_38 = (_Bool)1;
unsigned short var_39 = (unsigned short)65528;
long long int var_40 = 1554446772709050444LL;
long long int var_41 = -8500017231461830442LL;
unsigned long long int arr_1 [15] ;
short arr_2 [15] [15] ;
short arr_3 [15] [15] [15] ;
long long int arr_4 [15] [15] ;
unsigned short arr_7 [15] ;
long long int arr_12 [15] [15] ;
long long int arr_15 [15] [15] [15] ;
unsigned short arr_24 [18] ;
_Bool arr_25 [18] ;
unsigned char arr_26 [18] ;
unsigned short arr_27 [18] ;
short arr_29 [18] ;
signed char arr_32 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2817750538984583165ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)8614;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)13301 : (short)22744;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -7409907458810728839LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)5300;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 6111098672120389495LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3185833019861789106LL : 8224982941953272049LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37924 : (unsigned short)38662;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned char)177 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (unsigned short)25783;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = (short)31190;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (signed char)78;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
