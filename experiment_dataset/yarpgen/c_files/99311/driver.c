#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5214958378510769136LL;
unsigned long long int var_2 = 8917307987053221897ULL;
unsigned long long int var_3 = 1443142874835323047ULL;
int var_4 = -1392243104;
signed char var_5 = (signed char)105;
signed char var_6 = (signed char)30;
unsigned short var_7 = (unsigned short)9599;
long long int var_8 = -4292919132711224256LL;
long long int var_9 = -1118950343209981549LL;
unsigned short var_10 = (unsigned short)27960;
short var_11 = (short)-8421;
unsigned short var_12 = (unsigned short)14236;
short var_13 = (short)25585;
signed char var_14 = (signed char)46;
int zero = 0;
long long int var_15 = 9043636433524630451LL;
signed char var_16 = (signed char)-122;
signed char var_17 = (signed char)-35;
unsigned short var_18 = (unsigned short)28992;
unsigned int var_19 = 3040950002U;
short var_20 = (short)-17093;
unsigned long long int var_21 = 16618996856221034623ULL;
unsigned long long int var_22 = 13850737455061407856ULL;
int var_23 = 1006739068;
unsigned long long int var_24 = 570702079632963626ULL;
unsigned long long int var_25 = 11229098674642327420ULL;
unsigned short var_26 = (unsigned short)35939;
long long int var_27 = -2658722931266947808LL;
int var_28 = 1806358927;
int var_29 = 948591466;
signed char var_30 = (signed char)64;
unsigned long long int var_31 = 105648509726891745ULL;
signed char var_32 = (signed char)85;
long long int arr_5 [21] ;
unsigned short arr_8 [21] ;
long long int arr_21 [21] [21] [21] [21] ;
unsigned short arr_24 [21] [21] [21] [21] [21] ;
long long int arr_3 [21] ;
signed char arr_11 [21] [21] ;
unsigned int arr_18 [21] [21] [21] ;
int arr_26 [21] [21] ;
unsigned long long int arr_32 [12] [12] ;
_Bool arr_35 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 4738908193282480431LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)13297;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -773075082502481672LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)54953;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1116419964360104631LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 292680862U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? 178402827 : 1851346236;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? 14592142507064070983ULL : 15378475171867108418ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
