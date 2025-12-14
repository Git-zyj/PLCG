#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2583038562402632284LL;
unsigned char var_3 = (unsigned char)201;
unsigned char var_5 = (unsigned char)216;
long long int var_6 = 46024158467711559LL;
unsigned char var_7 = (unsigned char)84;
long long int var_12 = -2998569910556299997LL;
signed char var_13 = (signed char)-104;
unsigned char var_14 = (unsigned char)238;
int zero = 0;
unsigned char var_16 = (unsigned char)72;
signed char var_17 = (signed char)11;
unsigned short var_18 = (unsigned short)52385;
unsigned char var_19 = (unsigned char)218;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)13011;
unsigned long long int var_22 = 4450846321528058763ULL;
long long int var_23 = 5164863699677127365LL;
signed char var_24 = (signed char)98;
long long int var_25 = -3097672193252412020LL;
long long int var_26 = -1905402683262404710LL;
long long int var_27 = -7517771659298343031LL;
unsigned char var_28 = (unsigned char)83;
unsigned long long int var_29 = 10995814600276075503ULL;
unsigned char var_30 = (unsigned char)169;
long long int var_31 = -3185700994058393902LL;
long long int arr_0 [18] [18] ;
unsigned short arr_1 [18] [18] ;
long long int arr_2 [18] ;
unsigned short arr_3 [19] ;
unsigned short arr_4 [19] ;
_Bool arr_6 [19] ;
unsigned short arr_7 [19] ;
_Bool arr_8 [19] ;
unsigned long long int arr_9 [19] [19] [19] ;
_Bool arr_11 [19] [19] ;
long long int arr_14 [19] [19] ;
signed char arr_16 [19] [19] [19] ;
long long int arr_5 [19] ;
short arr_12 [19] [19] ;
signed char arr_19 [19] [19] [19] ;
signed char arr_20 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 3542177593458400503LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)17073;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -3989145649417152265LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)34836;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)591;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)4232;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 16059270580872012188ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 2695800608737679095LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4338135215275732036LL : -2978055525691900337LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)13382 : (short)-25148;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)18 : (signed char)80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)-15 : (signed char)96;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
