#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)69;
unsigned int var_9 = 313067671U;
unsigned short var_10 = (unsigned short)34257;
unsigned short var_12 = (unsigned short)42864;
unsigned int var_13 = 800442250U;
unsigned char var_14 = (unsigned char)55;
unsigned long long int var_15 = 14885055432474094313ULL;
unsigned long long int var_16 = 1545140166347226428ULL;
unsigned int var_17 = 3661870533U;
int zero = 0;
short var_19 = (short)28388;
unsigned short var_20 = (unsigned short)10189;
short var_21 = (short)9456;
short var_22 = (short)19863;
unsigned char var_23 = (unsigned char)16;
short var_24 = (short)29068;
int var_25 = -857945670;
unsigned char var_26 = (unsigned char)111;
unsigned short var_27 = (unsigned short)26451;
long long int var_28 = -6180316683902594105LL;
unsigned long long int arr_7 [17] ;
unsigned short arr_8 [17] [17] [17] ;
int arr_11 [16] ;
unsigned long long int arr_14 [16] [16] ;
unsigned long long int arr_15 [16] ;
int arr_17 [16] ;
unsigned short arr_21 [16] ;
signed char arr_22 [16] [16] ;
unsigned short arr_4 [12] [12] ;
unsigned long long int arr_13 [16] ;
unsigned long long int arr_18 [16] [16] ;
int arr_25 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 14021328715206999353ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)57742;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 736238608;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = 16368538697166841585ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 3758456012150101037ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 109246299;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (unsigned short)28110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4614 : (unsigned short)10085;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 13678559980962201865ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = 11952079647605199639ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = 1563648234;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
