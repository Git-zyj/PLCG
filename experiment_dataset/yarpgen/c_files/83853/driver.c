#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3191226503567736728LL;
unsigned short var_2 = (unsigned short)5331;
short var_3 = (short)-1626;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)141;
unsigned char var_10 = (unsigned char)173;
unsigned char var_11 = (unsigned char)251;
int zero = 0;
unsigned int var_12 = 1999956308U;
long long int var_13 = -2626352850333920361LL;
int var_14 = -1777320073;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15267154205654025988ULL;
unsigned long long int var_17 = 4243320784373067172ULL;
unsigned char var_18 = (unsigned char)125;
long long int var_19 = 4414296142404053258LL;
int var_20 = 1025892296;
int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
long long int arr_2 [23] [23] ;
unsigned long long int arr_4 [17] [17] ;
unsigned long long int arr_6 [17] [17] ;
unsigned short arr_9 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1277452846;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 14947473773627610521ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -8198875642736265014LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1292533458239955439ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 14538563183134833264ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)39476 : (unsigned short)15311;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
