#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
signed char var_1 = (signed char)-7;
int var_2 = -1167291615;
signed char var_4 = (signed char)26;
unsigned short var_5 = (unsigned short)41055;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-18787;
unsigned char var_8 = (unsigned char)111;
unsigned long long int var_9 = 6418784274066530441ULL;
int zero = 0;
unsigned int var_10 = 2268963876U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)204;
unsigned char var_13 = (unsigned char)157;
unsigned long long int var_14 = 12895040768153353277ULL;
unsigned long long int var_15 = 3873104364955582509ULL;
signed char var_16 = (signed char)-108;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)89;
unsigned long long int var_19 = 16113867953021698078ULL;
signed char var_20 = (signed char)36;
unsigned char var_21 = (unsigned char)90;
signed char var_22 = (signed char)-114;
unsigned int var_23 = 2458696544U;
unsigned char var_24 = (unsigned char)86;
_Bool arr_0 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned char arr_5 [19] ;
unsigned long long int arr_8 [19] ;
signed char arr_10 [19] [19] ;
signed char arr_3 [19] [19] ;
signed char arr_6 [19] [19] ;
long long int arr_7 [19] ;
short arr_14 [19] [19] ;
signed char arr_15 [19] ;
unsigned short arr_18 [19] [19] ;
long long int arr_23 [21] ;
unsigned char arr_24 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)24221 : (unsigned short)1013;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 5628213061850891392ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-116 : (signed char)-11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = -8332737226900787619LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (short)12397;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)6701;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = -8559571446332425824LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (unsigned char)37;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
