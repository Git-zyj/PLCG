#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
int var_1 = -235903022;
short var_2 = (short)29971;
unsigned long long int var_3 = 11107930742977463817ULL;
signed char var_4 = (signed char)-26;
unsigned char var_5 = (unsigned char)80;
unsigned int var_7 = 1292836669U;
unsigned char var_8 = (unsigned char)255;
long long int var_9 = 7969317636635708091LL;
int zero = 0;
unsigned int var_10 = 1586219805U;
int var_11 = 1082794608;
unsigned char var_12 = (unsigned char)133;
unsigned long long int var_13 = 11206788854775965979ULL;
unsigned int var_14 = 2272894763U;
signed char var_15 = (signed char)-43;
long long int var_16 = 4692092124717154802LL;
int var_17 = 1916736;
signed char var_18 = (signed char)33;
unsigned long long int var_19 = 15764673709432277617ULL;
unsigned long long int var_20 = 15483670187953470307ULL;
long long int var_21 = 498525423938323899LL;
int var_22 = -843354278;
unsigned int var_23 = 530268934U;
unsigned int var_24 = 29050922U;
signed char var_25 = (signed char)5;
unsigned int var_26 = 3720303529U;
signed char arr_0 [23] ;
short arr_1 [23] ;
int arr_2 [23] ;
unsigned short arr_4 [23] [23] [23] ;
unsigned int arr_6 [23] ;
signed char arr_7 [23] ;
unsigned long long int arr_9 [23] [23] ;
signed char arr_10 [23] [23] [23] [23] ;
_Bool arr_12 [18] ;
long long int arr_13 [18] [18] ;
unsigned char arr_14 [18] [18] [18] ;
long long int arr_25 [22] ;
unsigned int arr_28 [22] ;
unsigned int arr_36 [25] ;
int arr_38 [25] ;
signed char arr_11 [23] ;
signed char arr_22 [18] ;
signed char arr_29 [22] [22] ;
signed char arr_30 [22] [22] ;
long long int arr_33 [22] [22] ;
signed char arr_34 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)8648;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -324652593;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)16245 : (unsigned short)9253;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 69324411U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 2671988398150673003ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-41 : (signed char)20;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = 5563845512926655437LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)216 : (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = -8720368468572206024LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 3056155810U : 4108985999U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = 961964706U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = -1952534924;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)110 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)120 : (signed char)-103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-12 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? -1506322392407830393LL : -1381475290667206171LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)112;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
