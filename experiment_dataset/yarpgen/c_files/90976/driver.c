#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3488368166U;
unsigned long long int var_2 = 5991077779218485287ULL;
int var_3 = -1724830432;
unsigned short var_4 = (unsigned short)2667;
unsigned int var_5 = 3119546878U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_9 = -8562469859124478342LL;
long long int var_10 = -5554187446638300704LL;
int zero = 0;
long long int var_11 = -1930893116152847705LL;
long long int var_12 = 5724367145190300194LL;
unsigned int var_13 = 4159801369U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14978541445778201422ULL;
unsigned short var_16 = (unsigned short)41401;
unsigned short var_17 = (unsigned short)60246;
unsigned long long int var_18 = 2984454751849179956ULL;
int var_19 = 790510679;
long long int var_20 = 1246779585523544770LL;
signed char arr_1 [15] ;
unsigned long long int arr_2 [15] ;
_Bool arr_7 [14] ;
unsigned short arr_15 [14] [14] [14] [14] [14] ;
int arr_3 [15] ;
int arr_6 [14] ;
_Bool arr_19 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1711113005119057509ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)55968;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1222808233 : -1169380911;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 745179902 : 364823814;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
