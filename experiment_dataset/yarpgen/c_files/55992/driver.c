#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12599;
short var_5 = (short)4998;
unsigned short var_7 = (unsigned short)40614;
long long int var_8 = 5174023762208032709LL;
unsigned short var_9 = (unsigned short)27451;
int zero = 0;
long long int var_12 = -8806338065575901653LL;
unsigned char var_13 = (unsigned char)187;
signed char var_14 = (signed char)76;
long long int var_15 = -7674359078809441737LL;
int var_16 = -1311269226;
unsigned int var_17 = 2398696402U;
unsigned short var_18 = (unsigned short)50777;
long long int var_19 = -82084964315852927LL;
unsigned char var_20 = (unsigned char)69;
unsigned char var_21 = (unsigned char)52;
unsigned short var_22 = (unsigned short)37496;
unsigned short var_23 = (unsigned short)46214;
_Bool arr_0 [18] ;
unsigned long long int arr_2 [18] [18] ;
short arr_6 [20] ;
long long int arr_7 [19] ;
short arr_13 [19] [19] [19] ;
unsigned char arr_18 [23] ;
int arr_19 [23] ;
long long int arr_3 [18] ;
long long int arr_4 [18] [18] ;
_Bool arr_17 [19] [19] ;
int arr_20 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 18036306020505659931ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-14262;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 4713040485011943916LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-7713;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = -1964818893;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 9015834002644560746LL : 6387447123765933999LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -5831514749560635166LL : -158591677631367371LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 1620017780;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
