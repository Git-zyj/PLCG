#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -719101523;
unsigned short var_7 = (unsigned short)22770;
signed char var_8 = (signed char)-75;
unsigned char var_9 = (unsigned char)109;
int zero = 0;
long long int var_12 = 3675822803103723853LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5792052574101112527LL;
int var_15 = -2100629221;
unsigned char var_16 = (unsigned char)35;
unsigned short var_17 = (unsigned short)1139;
unsigned short var_18 = (unsigned short)38792;
short var_19 = (short)29226;
unsigned long long int var_20 = 16594664908518635082ULL;
unsigned short var_21 = (unsigned short)43167;
short var_22 = (short)-14684;
unsigned char var_23 = (unsigned char)223;
unsigned char var_24 = (unsigned char)46;
unsigned int var_25 = 1040757097U;
signed char arr_1 [13] [13] ;
int arr_2 [13] ;
unsigned short arr_3 [13] ;
long long int arr_5 [13] [13] [13] ;
_Bool arr_6 [13] [13] [13] [13] ;
unsigned int arr_7 [13] ;
unsigned int arr_11 [24] ;
unsigned int arr_12 [24] ;
short arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 668227171 : 128435115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32197 : (unsigned short)54226;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8704669251548007051LL : 6289946541734855380LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 1875860443U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 2607460617U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 4177438542U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)22886 : (short)-9968;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
