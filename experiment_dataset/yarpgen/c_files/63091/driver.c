#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10754;
unsigned long long int var_1 = 9989106221711840488ULL;
int var_2 = -57912039;
int var_3 = -936168475;
signed char var_4 = (signed char)0;
unsigned long long int var_5 = 4888125706385961429ULL;
unsigned short var_6 = (unsigned short)559;
unsigned int var_7 = 828746987U;
signed char var_8 = (signed char)-43;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)84;
unsigned short var_12 = (unsigned short)28000;
unsigned short var_13 = (unsigned short)64651;
unsigned char var_14 = (unsigned char)171;
unsigned long long int var_15 = 6506819532395763742ULL;
int zero = 0;
signed char var_16 = (signed char)-43;
unsigned char var_17 = (unsigned char)1;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-8;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4358207349436632026ULL;
signed char var_22 = (signed char)-92;
unsigned short var_23 = (unsigned short)29359;
unsigned short var_24 = (unsigned short)29775;
unsigned long long int var_25 = 16489728169651275511ULL;
signed char var_26 = (signed char)-65;
unsigned char var_27 = (unsigned char)200;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)39;
unsigned short var_30 = (unsigned short)65365;
signed char var_31 = (signed char)-13;
unsigned long long int var_32 = 16047555189742135450ULL;
unsigned int var_33 = 307263846U;
long long int var_34 = -3991955755671496861LL;
short var_35 = (short)6297;
_Bool var_36 = (_Bool)1;
unsigned short var_37 = (unsigned short)2091;
unsigned long long int var_38 = 5710060531849893322ULL;
int arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned int arr_2 [19] ;
unsigned long long int arr_4 [16] ;
unsigned short arr_5 [16] [16] ;
signed char arr_6 [16] [16] ;
signed char arr_8 [16] ;
signed char arr_9 [16] ;
int arr_10 [16] ;
unsigned short arr_13 [16] ;
_Bool arr_14 [16] [16] [16] [16] ;
short arr_16 [16] [16] ;
unsigned char arr_18 [16] [16] ;
_Bool arr_19 [16] ;
int arr_20 [16] [16] ;
signed char arr_21 [16] [16] ;
_Bool arr_28 [19] ;
long long int arr_33 [19] [19] [19] [19] ;
signed char arr_3 [19] [19] ;
unsigned long long int arr_7 [16] [16] ;
_Bool arr_15 [16] [16] [16] [16] ;
unsigned short arr_37 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1914933995;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1697470171U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 9026671616948613755ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36317 : (unsigned short)51161;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)37 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1473928993 : 1485847091;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22413 : (unsigned short)37697;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-21088;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = -1507517900;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = -3696095546433047765LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-120 : (signed char)-91;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 7136286913491882661ULL : 9259473598494747573ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)63855 : (unsigned short)57179;
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
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
