#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)247;
short var_3 = (short)19202;
unsigned short var_4 = (unsigned short)3851;
unsigned short var_5 = (unsigned short)24043;
short var_6 = (short)7928;
signed char var_8 = (signed char)-19;
unsigned short var_9 = (unsigned short)28052;
unsigned int var_10 = 3899794515U;
int zero = 0;
int var_11 = -1935316607;
unsigned char var_12 = (unsigned char)187;
short var_13 = (short)18337;
unsigned char var_14 = (unsigned char)193;
long long int var_15 = -1174833538948153325LL;
int var_16 = -1834380867;
unsigned int var_17 = 4249375277U;
unsigned short var_18 = (unsigned short)17978;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)62541;
int arr_0 [12] ;
int arr_1 [12] ;
int arr_2 [12] ;
long long int arr_3 [12] [12] ;
short arr_7 [12] [12] ;
int arr_10 [17] ;
short arr_14 [17] [17] ;
short arr_8 [12] [12] ;
short arr_9 [12] [12] ;
unsigned long long int arr_15 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -963552670;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 326960929;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1850941067;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 4580836571594092341LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-21446 : (short)-28477;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -425370717;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-16447 : (short)-31763;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-6847 : (short)3604;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)7778;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8521318235670833611ULL : 9979533346242667978ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
