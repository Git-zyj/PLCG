#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13454381592547871479ULL;
short var_3 = (short)20409;
short var_4 = (short)-20237;
unsigned long long int var_5 = 10743149715225068746ULL;
unsigned int var_6 = 3137169142U;
unsigned int var_7 = 3915110754U;
unsigned long long int var_8 = 13053168193146954321ULL;
int var_9 = 1739811563;
unsigned int var_10 = 33188176U;
unsigned int var_11 = 2437806870U;
short var_12 = (short)-31226;
int zero = 0;
unsigned long long int var_13 = 11944283222620506575ULL;
short var_14 = (short)1890;
signed char var_15 = (signed char)120;
signed char var_16 = (signed char)120;
unsigned int var_17 = 3288355566U;
short var_18 = (short)23218;
int var_19 = 826094085;
short var_20 = (short)13308;
short var_21 = (short)-25814;
unsigned int var_22 = 3241910389U;
int var_23 = 1131239499;
int var_24 = -2034343558;
signed char var_25 = (signed char)49;
unsigned int var_26 = 454456150U;
unsigned long long int var_27 = 13628503318928995970ULL;
unsigned long long int var_28 = 18055837509713276503ULL;
signed char var_29 = (signed char)114;
signed char arr_0 [23] [23] ;
signed char arr_1 [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_8 [11] [11] ;
signed char arr_10 [12] ;
unsigned int arr_11 [12] ;
unsigned long long int arr_15 [12] ;
unsigned int arr_16 [12] ;
int arr_20 [11] [11] ;
unsigned int arr_25 [10] ;
unsigned long long int arr_30 [10] [10] [10] ;
int arr_3 [23] ;
unsigned long long int arr_4 [23] ;
short arr_5 [23] [23] ;
unsigned long long int arr_13 [12] ;
unsigned int arr_18 [12] [12] ;
unsigned long long int arr_28 [10] [10] ;
short arr_31 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-28 : (signed char)-116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)10 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 8476710076229268129ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 3951872738U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 6058592638785383915ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1535639323U : 3628574806U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = 1170345714;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 441828644U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 7069233335669540034ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1737689999 : 609417293;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6311699727347365830ULL : 8332294674999145201ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)15783 : (short)14622;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 1924644735562642308ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 3854881743U : 3530432515U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = 10307465396122745542ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = (short)24455;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
