#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)38404;
signed char var_5 = (signed char)84;
unsigned int var_6 = 2712879176U;
signed char var_7 = (signed char)73;
unsigned int var_8 = 1773306954U;
unsigned int var_9 = 1371919584U;
unsigned short var_10 = (unsigned short)58592;
unsigned int var_11 = 3656258488U;
int zero = 0;
int var_12 = 685838120;
_Bool var_13 = (_Bool)0;
int var_14 = -1621442026;
unsigned short var_15 = (unsigned short)57251;
unsigned int var_16 = 3680075981U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1582423257U;
unsigned int var_19 = 1831575158U;
int var_20 = 1805900883;
unsigned int var_21 = 349963573U;
unsigned short var_22 = (unsigned short)45430;
unsigned int var_23 = 2873602127U;
unsigned long long int var_24 = 14430358810366274879ULL;
unsigned short var_25 = (unsigned short)56534;
int var_26 = 613989553;
unsigned int arr_0 [15] ;
signed char arr_1 [15] [15] ;
unsigned int arr_2 [15] [15] [15] ;
unsigned long long int arr_3 [15] ;
unsigned short arr_7 [15] [15] [15] [15] ;
unsigned int arr_9 [15] ;
signed char arr_12 [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] ;
unsigned short arr_14 [15] [15] [15] [15] ;
unsigned short arr_19 [15] [15] [15] [15] ;
unsigned short arr_8 [15] ;
unsigned short arr_21 [15] ;
unsigned short arr_22 [15] ;
short arr_25 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2727265129U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 329549558U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 12316703264742174258ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)20449 : (unsigned short)7192;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 1897530142U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 16209437682792873275ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10624;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)22384;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned short)61363;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (unsigned short)37866;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (unsigned short)3315;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (short)-10820;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
