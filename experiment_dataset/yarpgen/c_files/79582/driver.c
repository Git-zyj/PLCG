#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65039;
unsigned short var_1 = (unsigned short)30247;
unsigned short var_2 = (unsigned short)65003;
unsigned long long int var_3 = 5842371738265555484ULL;
unsigned long long int var_4 = 15181209027186751037ULL;
unsigned long long int var_5 = 2203942048941167589ULL;
unsigned long long int var_6 = 12146666172050117544ULL;
unsigned long long int var_7 = 2986350848356514676ULL;
unsigned int var_8 = 4166095568U;
unsigned short var_9 = (unsigned short)29957;
unsigned long long int var_11 = 398288505554628615ULL;
unsigned long long int var_12 = 955716264854688894ULL;
int zero = 0;
unsigned int var_13 = 1221871885U;
unsigned long long int var_14 = 15046919689383690430ULL;
unsigned short var_15 = (unsigned short)28433;
unsigned short var_16 = (unsigned short)6402;
unsigned short var_17 = (unsigned short)42462;
unsigned int var_18 = 1878098007U;
unsigned long long int var_19 = 17826191968107175636ULL;
unsigned int var_20 = 2338181936U;
unsigned short var_21 = (unsigned short)49533;
unsigned int var_22 = 916190833U;
unsigned int var_23 = 1944027370U;
unsigned int var_24 = 1765996118U;
unsigned short arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
unsigned int arr_2 [14] [14] ;
unsigned long long int arr_4 [14] [14] ;
unsigned int arr_7 [14] ;
unsigned int arr_8 [14] ;
unsigned long long int arr_14 [14] ;
unsigned int arr_17 [14] [14] ;
unsigned short arr_24 [14] ;
unsigned short arr_6 [14] ;
unsigned short arr_11 [14] ;
unsigned long long int arr_21 [14] [14] [14] [14] [14] ;
unsigned long long int arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)52015;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2740037396026630228ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1455116732U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1667631484716411742ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 2856552420U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 3726397056U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 11716745788295640727ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = 49503464U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (unsigned short)11448;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)30054;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned short)23906;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 13157412703764321423ULL : 15595206980537497395ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = 17304654203447268310ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
