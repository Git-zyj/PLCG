#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1874761526315269088LL;
int var_3 = -370228301;
int var_4 = 1174051880;
long long int var_5 = 4772826473412976172LL;
short var_6 = (short)-28065;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 4621499231240461503ULL;
unsigned short var_13 = (unsigned short)53747;
unsigned short var_14 = (unsigned short)58530;
int zero = 0;
long long int var_17 = 6333627682757932619LL;
int var_18 = -1114071826;
unsigned long long int var_19 = 1356454776671851736ULL;
_Bool var_20 = (_Bool)1;
int var_21 = -1515628067;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3871951511U;
long long int var_24 = -738781693948896369LL;
unsigned int var_25 = 1374439474U;
int var_26 = -422957241;
unsigned long long int var_27 = 17616121055685670050ULL;
unsigned int var_28 = 1093066004U;
unsigned long long int var_29 = 8774318568482920345ULL;
int arr_0 [17] ;
int arr_2 [17] [17] ;
int arr_4 [16] ;
unsigned int arr_5 [16] [16] ;
unsigned int arr_7 [11] [11] ;
int arr_9 [11] ;
signed char arr_10 [11] [11] ;
unsigned short arr_3 [17] [17] ;
int arr_15 [11] ;
int arr_16 [11] [11] [11] ;
long long int arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1264634215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -971355668;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 2008887445;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 2015901918U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 4066070045U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = -1169323352;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)19 : (signed char)-84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)44076;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1748622473 : 716960143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1153987038 : 1997754961;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -7550416958168751325LL : -6248942204178482628LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
