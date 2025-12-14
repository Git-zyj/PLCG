#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9380;
unsigned long long int var_3 = 11283070345770381532ULL;
int var_5 = -1980865083;
long long int var_6 = 3502608476292423561LL;
long long int var_7 = -4419030794213684048LL;
int var_8 = 1453418257;
unsigned short var_9 = (unsigned short)35872;
unsigned char var_12 = (unsigned char)122;
unsigned char var_13 = (unsigned char)207;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8158268767815078599LL;
int zero = 0;
int var_16 = 702427213;
unsigned int var_17 = 510946146U;
unsigned int var_18 = 825888125U;
int var_19 = -1479790744;
unsigned int var_20 = 4093134588U;
unsigned char var_21 = (unsigned char)112;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)61667;
short var_24 = (short)-25395;
unsigned char arr_0 [13] ;
long long int arr_1 [13] ;
unsigned int arr_3 [18] [18] ;
long long int arr_4 [18] ;
int arr_6 [18] ;
int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -8920722057250730208LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1244570457U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -7509459424167946605LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 488907008 : 1472492822;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 806301343;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
