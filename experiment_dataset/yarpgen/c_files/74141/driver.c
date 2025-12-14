#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1271079176;
int var_2 = -588795662;
int var_3 = -694007611;
unsigned short var_4 = (unsigned short)4190;
unsigned long long int var_5 = 2448038025482698441ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)107;
short var_8 = (short)-2471;
unsigned char var_9 = (unsigned char)168;
long long int var_10 = 7190344887412157703LL;
unsigned short var_12 = (unsigned short)59995;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 3097511036648876483ULL;
int zero = 0;
signed char var_17 = (signed char)57;
signed char var_18 = (signed char)47;
signed char var_19 = (signed char)45;
unsigned long long int var_20 = 13634521179283771255ULL;
unsigned char arr_0 [14] ;
unsigned int arr_1 [14] ;
signed char arr_2 [14] ;
unsigned long long int arr_3 [14] ;
signed char arr_6 [14] [14] ;
long long int arr_7 [14] [14] [14] [14] ;
_Bool arr_4 [14] ;
int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)253 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 209736994U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)-116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 5756365757187454381ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3835376127475833110LL : 1442664282687456071LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2077675818 : -1235314815;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
