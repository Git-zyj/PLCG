#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2324498608U;
unsigned char var_1 = (unsigned char)234;
unsigned char var_4 = (unsigned char)48;
unsigned long long int var_5 = 148661181014986772ULL;
short var_6 = (short)23849;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-9694;
signed char var_10 = (signed char)-92;
unsigned short var_11 = (unsigned short)30741;
signed char var_12 = (signed char)-72;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 3013955020U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 628386457563997300ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)12538;
unsigned short var_20 = (unsigned short)14654;
short var_21 = (short)25958;
int var_22 = -706592596;
unsigned char var_23 = (unsigned char)153;
unsigned char var_24 = (unsigned char)192;
unsigned short var_25 = (unsigned short)42999;
unsigned char var_26 = (unsigned char)87;
long long int var_27 = 3498518276211641464LL;
unsigned long long int var_28 = 11982312008253903644ULL;
unsigned long long int var_29 = 2864750082839152345ULL;
unsigned char var_30 = (unsigned char)249;
unsigned int var_31 = 3389407347U;
unsigned int var_32 = 3486749870U;
signed char var_33 = (signed char)95;
unsigned long long int var_34 = 5639971544494123023ULL;
unsigned char arr_0 [19] [19] ;
_Bool arr_1 [19] ;
signed char arr_3 [19] [19] ;
signed char arr_4 [19] ;
signed char arr_13 [19] ;
signed char arr_17 [19] [19] ;
unsigned long long int arr_22 [25] [25] ;
unsigned long long int arr_8 [19] [19] [19] ;
unsigned char arr_9 [19] ;
unsigned int arr_24 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)239 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = 8664517850515520554ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 293967512490625626ULL : 12930621386216479676ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)177 : (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = 919929649U;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
