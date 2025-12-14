#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2636061754434473968LL;
unsigned long long int var_2 = 1307444419726545863ULL;
short var_3 = (short)-14535;
short var_4 = (short)28009;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)63598;
long long int var_11 = -3423547827726362LL;
short var_13 = (short)24886;
unsigned long long int var_14 = 18020498133856693192ULL;
unsigned int var_16 = 2510162257U;
int zero = 0;
long long int var_18 = 5853161242094855913LL;
unsigned long long int var_19 = 16255609224346662081ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5669242403306605352LL;
unsigned int var_22 = 2023773841U;
unsigned long long int var_23 = 16277791643054612619ULL;
unsigned long long int var_24 = 5657620238129712541ULL;
short var_25 = (short)32763;
short arr_0 [10] ;
unsigned int arr_1 [10] ;
long long int arr_4 [10] [10] ;
unsigned short arr_9 [11] ;
int arr_10 [11] ;
int arr_12 [11] [11] ;
short arr_14 [11] ;
unsigned short arr_15 [11] [11] ;
short arr_18 [18] ;
short arr_20 [18] ;
unsigned int arr_21 [18] ;
unsigned char arr_8 [10] ;
unsigned long long int arr_16 [11] ;
unsigned long long int arr_17 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-2750;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2034358912U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -8959759473345107321LL : 2013239766391402631LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned short)979;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 723868203;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = -1685279696;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (short)-5757;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)32414;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)3488 : (short)-26332;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (short)-1418;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 3242583684U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = 16816311805436911686ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 8464127808903890416ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
