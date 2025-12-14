#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13939172682152781617ULL;
unsigned char var_2 = (unsigned char)179;
int var_3 = 318710484;
unsigned char var_4 = (unsigned char)27;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-112;
unsigned long long int var_9 = 3328215742806296507ULL;
unsigned int var_10 = 2824844778U;
unsigned long long int var_12 = 18099816352948626885ULL;
int var_13 = 606790382;
unsigned int var_14 = 3668132811U;
int zero = 0;
unsigned int var_15 = 1443597894U;
unsigned char var_16 = (unsigned char)34;
int var_17 = -99729726;
unsigned int var_18 = 4145422914U;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)246;
unsigned int var_21 = 176641837U;
unsigned int var_22 = 2084767549U;
unsigned int var_23 = 1262289603U;
unsigned long long int var_24 = 17871262275232992935ULL;
int var_25 = -455853738;
unsigned int var_26 = 2116659234U;
unsigned long long int var_27 = 16128058874388642916ULL;
signed char var_28 = (signed char)-63;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 3106385827U;
unsigned long long int var_31 = 13144758273113915075ULL;
unsigned int var_32 = 879278983U;
unsigned int var_33 = 1180527941U;
unsigned int arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
int arr_2 [17] ;
int arr_3 [17] [17] ;
unsigned int arr_5 [17] [17] ;
short arr_7 [17] ;
long long int arr_8 [17] [17] ;
long long int arr_9 [17] [17] [17] ;
_Bool arr_11 [17] [17] [17] ;
unsigned int arr_12 [17] [17] [17] [17] ;
unsigned long long int arr_15 [17] [17] ;
unsigned int arr_20 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 2938126133U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2444495721U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -989029983;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 681996391;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 68270821U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)17415;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 1942445148678771197LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -6717702030688117482LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 4124979919U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = 596866586128281369ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2177654550U;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
