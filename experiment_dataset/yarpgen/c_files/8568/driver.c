#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3997034088U;
short var_1 = (short)23723;
signed char var_2 = (signed char)3;
unsigned char var_3 = (unsigned char)63;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-32129;
short var_8 = (short)19216;
int var_9 = 1296035829;
int var_10 = 710173188;
int var_11 = 1901625635;
long long int var_12 = 8345765254226511261LL;
signed char var_13 = (signed char)-77;
short var_14 = (short)-30755;
short var_15 = (short)18025;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2037622494U;
unsigned char var_18 = (unsigned char)204;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-23378;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)24265;
unsigned char var_23 = (unsigned char)1;
long long int var_24 = -7219210752882104168LL;
unsigned int var_25 = 3431782960U;
long long int var_26 = -1272661171273087460LL;
signed char var_27 = (signed char)28;
unsigned char var_28 = (unsigned char)239;
unsigned int var_29 = 3862122519U;
unsigned int var_30 = 2243157926U;
short var_31 = (short)-10022;
unsigned short var_32 = (unsigned short)11480;
long long int var_33 = -2646330250247423758LL;
int var_34 = -1325426982;
unsigned char var_35 = (unsigned char)100;
long long int var_36 = 3924135473206134462LL;
short var_37 = (short)6533;
short arr_5 [24] [24] [24] ;
_Bool arr_6 [24] ;
unsigned char arr_9 [24] ;
long long int arr_16 [24] ;
short arr_17 [24] [24] ;
unsigned int arr_18 [24] ;
unsigned char arr_34 [24] ;
unsigned char arr_39 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)28267 : (short)-22533;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -8289520508430200844LL : 416947055599955512LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-3516 : (short)-4838;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 3137250243U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (unsigned char)46;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
