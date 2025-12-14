#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3081880504998458131ULL;
short var_2 = (short)19457;
int var_3 = 1733128201;
long long int var_4 = -3957562151250271223LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-6480;
int var_7 = -1225364902;
signed char var_8 = (signed char)97;
short var_10 = (short)28681;
int zero = 0;
short var_11 = (short)-17903;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)98;
signed char var_14 = (signed char)4;
long long int var_15 = -438896981841058561LL;
unsigned int var_16 = 2106911744U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2698505076U;
unsigned long long int var_19 = 16385178808663580682ULL;
unsigned short var_20 = (unsigned short)40742;
long long int var_21 = -1302031917207619807LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -8505023447400162640LL;
long long int var_24 = -1795168429826161783LL;
unsigned short var_25 = (unsigned short)3058;
signed char var_26 = (signed char)-94;
unsigned long long int var_27 = 996706246189550010ULL;
unsigned char var_28 = (unsigned char)217;
unsigned char var_29 = (unsigned char)154;
int arr_0 [12] ;
unsigned short arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
unsigned char arr_3 [12] ;
long long int arr_6 [12] [12] [12] ;
unsigned int arr_8 [12] ;
unsigned short arr_9 [12] [12] ;
unsigned short arr_11 [22] ;
long long int arr_12 [22] ;
unsigned int arr_13 [13] [13] ;
int arr_4 [12] [12] [12] ;
unsigned int arr_5 [12] [12] ;
long long int arr_10 [12] ;
unsigned long long int arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1157580258;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)33787;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 16541304638450012583ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 431560517181946303LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 2821962263U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)28842;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned short)47524;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 2858008738153534937LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 2301748564U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -513979863 : 1511456251;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2351835545U : 1529671006U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 9188405779006231416LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 1213156897149612645ULL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
