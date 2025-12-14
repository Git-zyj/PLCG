#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26066;
unsigned short var_1 = (unsigned short)19017;
unsigned int var_2 = 2519780146U;
unsigned short var_3 = (unsigned short)38785;
unsigned char var_5 = (unsigned char)198;
unsigned long long int var_6 = 4106421603462949744ULL;
unsigned short var_7 = (unsigned short)11691;
unsigned short var_8 = (unsigned short)28749;
long long int var_9 = 3716013487390038339LL;
long long int var_11 = -3548266455455215749LL;
unsigned short var_12 = (unsigned short)36716;
int zero = 0;
unsigned char var_13 = (unsigned char)91;
long long int var_14 = -7071054895462661788LL;
unsigned int var_15 = 1882193277U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2381456311U;
long long int var_18 = 7308649488378666645LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)39368;
unsigned int var_21 = 201318099U;
unsigned short var_22 = (unsigned short)4104;
long long int var_23 = -1934734963434711678LL;
unsigned int var_24 = 843292289U;
unsigned short var_25 = (unsigned short)33166;
unsigned long long int var_26 = 6581742090117570245ULL;
unsigned short var_27 = (unsigned short)45229;
unsigned short var_28 = (unsigned short)3238;
unsigned char var_29 = (unsigned char)119;
unsigned int var_30 = 146846145U;
unsigned long long int var_31 = 216010099916241493ULL;
long long int var_32 = 6553444193669716935LL;
unsigned int var_33 = 2860003662U;
unsigned short var_34 = (unsigned short)64578;
unsigned short var_35 = (unsigned short)34109;
long long int var_36 = 8631005428027838528LL;
long long int var_37 = 3959541168177868457LL;
long long int var_38 = -5585449382628296588LL;
unsigned long long int var_39 = 3139861088319145904ULL;
unsigned int var_40 = 3820458436U;
unsigned int arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] [23] ;
unsigned short arr_4 [23] ;
unsigned int arr_5 [23] ;
unsigned int arr_6 [23] [23] [23] ;
unsigned int arr_7 [23] [23] [23] ;
unsigned short arr_8 [23] [23] ;
unsigned char arr_9 [23] [23] [23] ;
unsigned int arr_10 [23] ;
unsigned int arr_12 [23] ;
unsigned long long int arr_13 [23] [23] ;
unsigned short arr_14 [23] [23] [23] ;
unsigned char arr_16 [23] ;
unsigned long long int arr_17 [23] [23] [23] [23] ;
unsigned char arr_18 [23] ;
unsigned int arr_19 [23] [23] [23] ;
unsigned int arr_21 [23] [23] [23] ;
long long int arr_27 [20] [20] ;
unsigned short arr_28 [20] ;
unsigned short arr_11 [23] [23] [23] ;
unsigned short arr_25 [17] ;
unsigned int arr_29 [20] [20] ;
unsigned short arr_30 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 3287882367U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)37708;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)45035;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)4913;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)56049;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2692341234U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 454321492U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2904132616U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)47391;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 925584101U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 2273924267U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 11251711479028608926ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)31224;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 2293799260150668701ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 3264722190U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 3541501389U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_27 [i_0] [i_1] = 1184638895544561382LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (unsigned short)14415;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)47680;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (unsigned short)17299;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = 3744822327U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = (unsigned short)12297;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
