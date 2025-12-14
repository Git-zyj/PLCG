#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2630960628U;
short var_1 = (short)23372;
unsigned char var_3 = (unsigned char)224;
unsigned int var_4 = 2455215604U;
unsigned long long int var_5 = 5397662342165027731ULL;
signed char var_6 = (signed char)21;
int var_8 = 1603584584;
_Bool var_9 = (_Bool)1;
int var_10 = -841865300;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)243;
int var_13 = 1192504727;
signed char var_14 = (signed char)-66;
int zero = 0;
unsigned long long int var_15 = 1542918229883889500ULL;
unsigned char var_16 = (unsigned char)86;
unsigned long long int var_17 = 820665199690154913ULL;
int var_18 = 686721841;
signed char var_19 = (signed char)23;
int var_20 = 1529838859;
unsigned int var_21 = 2267742817U;
unsigned short var_22 = (unsigned short)57399;
unsigned long long int var_23 = 5878667309372920979ULL;
long long int var_24 = 1944761281544380237LL;
unsigned long long int var_25 = 12601447513078917169ULL;
int var_26 = 1842029952;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)3;
unsigned char var_29 = (unsigned char)39;
unsigned int var_30 = 3131816357U;
unsigned int arr_0 [12] ;
signed char arr_1 [12] ;
signed char arr_2 [12] ;
signed char arr_3 [12] [12] ;
unsigned char arr_4 [12] [12] [12] ;
signed char arr_5 [12] [12] ;
unsigned long long int arr_6 [12] [12] [12] ;
int arr_7 [12] [12] [12] ;
signed char arr_8 [12] ;
short arr_9 [12] [12] [12] [12] ;
int arr_11 [12] ;
_Bool arr_19 [12] [12] [12] ;
unsigned char arr_21 [12] [12] [12] [12] ;
unsigned char arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2225244673U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4679821563528611357ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 898137943;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-1838;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -65103724;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (unsigned char)141;
}

void checksum() {
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
