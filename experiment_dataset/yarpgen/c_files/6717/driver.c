#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5574;
long long int var_1 = -2204592663170293884LL;
unsigned short var_2 = (unsigned short)52022;
unsigned char var_3 = (unsigned char)97;
unsigned short var_4 = (unsigned short)24729;
int var_5 = 1337971354;
short var_7 = (short)24886;
signed char var_9 = (signed char)-53;
unsigned long long int var_10 = 5295163705809398922ULL;
unsigned short var_11 = (unsigned short)3248;
int var_13 = -700781998;
int zero = 0;
short var_14 = (short)13248;
unsigned long long int var_15 = 2441915157571228964ULL;
unsigned int var_16 = 1405382286U;
unsigned long long int var_17 = 11437274097046153648ULL;
unsigned char var_18 = (unsigned char)252;
int var_19 = 1614983201;
unsigned short var_20 = (unsigned short)24493;
short var_21 = (short)18677;
long long int var_22 = -8878832913479929165LL;
_Bool arr_0 [25] ;
unsigned short arr_1 [25] [25] ;
unsigned short arr_2 [25] [25] ;
unsigned int arr_4 [17] [17] ;
unsigned char arr_5 [17] ;
unsigned short arr_6 [17] [17] [17] ;
unsigned short arr_7 [17] [17] ;
short arr_8 [17] [17] ;
unsigned short arr_3 [25] ;
short arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55495;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)47151 : (unsigned short)9447;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 326929580U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)25988;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)16587;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-30121 : (short)2349;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62816 : (unsigned short)61021;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-25739 : (short)-7491;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
