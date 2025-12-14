#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1583498785705987781LL;
unsigned int var_1 = 3731145566U;
long long int var_2 = 8057753607593154066LL;
signed char var_3 = (signed char)-27;
unsigned char var_4 = (unsigned char)85;
int var_6 = -1259820054;
unsigned short var_7 = (unsigned short)18659;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-28434;
unsigned char var_10 = (unsigned char)192;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)5966;
int zero = 0;
unsigned int var_13 = 592918837U;
int var_14 = 190099119;
signed char var_15 = (signed char)79;
long long int var_16 = -8275391541526363969LL;
unsigned short var_17 = (unsigned short)20913;
unsigned short var_18 = (unsigned short)58987;
unsigned short var_19 = (unsigned short)44477;
unsigned char var_20 = (unsigned char)140;
unsigned char var_21 = (unsigned char)153;
unsigned short var_22 = (unsigned short)7575;
short var_23 = (short)16862;
unsigned short var_24 = (unsigned short)50432;
_Bool var_25 = (_Bool)0;
short var_26 = (short)5255;
unsigned short var_27 = (unsigned short)44125;
short var_28 = (short)-14395;
long long int var_29 = -8164369884275171278LL;
long long int arr_2 [18] ;
unsigned short arr_4 [18] [18] [18] ;
unsigned long long int arr_8 [18] ;
long long int arr_12 [23] ;
unsigned int arr_5 [18] ;
unsigned char arr_9 [18] [18] [18] [18] ;
unsigned int arr_10 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -4517530426031060974LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)27030;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 11983205004875552056ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -7711833680884237042LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 143143040U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1440102548U;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
