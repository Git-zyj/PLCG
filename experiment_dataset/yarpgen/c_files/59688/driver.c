#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -741226368;
unsigned int var_3 = 2033967596U;
signed char var_5 = (signed char)113;
long long int var_6 = 2188826217180945157LL;
unsigned char var_8 = (unsigned char)244;
unsigned char var_9 = (unsigned char)238;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-79;
long long int var_15 = -2967377338157906892LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = -3370638935605836789LL;
int var_21 = 382521517;
_Bool var_22 = (_Bool)0;
long long int var_23 = 3489217885815153058LL;
long long int var_24 = -6466922274604363411LL;
int var_25 = 645769151;
unsigned long long int var_26 = 11169199419160192251ULL;
_Bool arr_0 [22] ;
unsigned long long int arr_3 [22] ;
long long int arr_4 [22] ;
unsigned char arr_6 [22] [22] [22] ;
signed char arr_7 [22] ;
long long int arr_8 [22] [22] [22] ;
unsigned int arr_9 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 14302516482891881363ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -3521915797003472283LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5211691669742195045LL : 5697135933942586961LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 288442981U : 705134819U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
