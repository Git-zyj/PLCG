#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)57326;
unsigned long long int var_2 = 9005759725675620760ULL;
long long int var_3 = -9024259270878550686LL;
long long int var_5 = -7557758082937061764LL;
unsigned long long int var_6 = 2229399522945235430ULL;
unsigned char var_8 = (unsigned char)48;
long long int var_9 = 3407652670353845702LL;
int zero = 0;
unsigned char var_10 = (unsigned char)88;
short var_11 = (short)-18057;
unsigned int var_12 = 3265911249U;
unsigned short var_13 = (unsigned short)55739;
unsigned long long int var_14 = 2166184532108266034ULL;
int var_15 = -905867955;
long long int var_16 = -6904525278831208217LL;
unsigned char arr_1 [10] ;
unsigned long long int arr_4 [13] ;
unsigned short arr_5 [13] ;
unsigned long long int arr_8 [15] [15] ;
_Bool arr_9 [15] ;
unsigned short arr_3 [10] ;
_Bool arr_6 [13] [13] ;
unsigned long long int arr_7 [13] ;
unsigned long long int arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 17550218802390750277ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57389 : (unsigned short)26401;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 11870814027699060093ULL : 11627283471543990333ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33092 : (unsigned short)17657;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 13509341710154409342ULL : 12629305364088993994ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1010267423941567215ULL : 13794626501260642361ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
