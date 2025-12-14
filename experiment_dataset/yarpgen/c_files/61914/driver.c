#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63584;
short var_3 = (short)-7166;
short var_4 = (short)24404;
signed char var_5 = (signed char)-31;
signed char var_6 = (signed char)76;
short var_7 = (short)14028;
signed char var_11 = (signed char)-81;
signed char var_12 = (signed char)-93;
short var_13 = (short)-4762;
unsigned long long int var_14 = 3526542875245846477ULL;
unsigned long long int var_15 = 7576453065160125153ULL;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 7162685689964220210ULL;
int zero = 0;
unsigned long long int var_20 = 12260673488729803811ULL;
unsigned int var_21 = 327684991U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)89;
signed char var_24 = (signed char)-17;
unsigned long long int var_25 = 8769922221127330673ULL;
unsigned int var_26 = 617373428U;
_Bool arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
unsigned int arr_4 [16] [16] ;
unsigned int arr_12 [16] [16] [16] [16] [16] ;
_Bool arr_13 [16] [16] [16] [16] [16] [16] ;
short arr_15 [23] ;
unsigned char arr_16 [23] ;
signed char arr_17 [23] ;
signed char arr_18 [23] ;
unsigned char arr_21 [23] [23] ;
unsigned long long int arr_25 [23] ;
unsigned char arr_32 [23] ;
unsigned char arr_2 [16] [16] ;
short arr_3 [16] ;
unsigned char arr_6 [16] ;
unsigned long long int arr_14 [16] [16] [16] [16] [16] [16] ;
_Bool arr_19 [23] [23] ;
unsigned short arr_20 [23] [23] [23] ;
unsigned long long int arr_23 [23] [23] [23] ;
signed char arr_28 [23] [23] ;
long long int arr_29 [23] ;
unsigned char arr_34 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 2239171973U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2558445954U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 2888705618U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (short)-30910;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = 14876473480170682866ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)180 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-14390 : (short)20403;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 8882760281226134860ULL : 4204557582581294168ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)21802;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 598806832447633412ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = 913665432168321944LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = (unsigned char)99;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
