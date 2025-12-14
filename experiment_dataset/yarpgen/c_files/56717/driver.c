#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -377707025;
unsigned long long int var_3 = 14057394530959141016ULL;
unsigned char var_5 = (unsigned char)236;
unsigned short var_7 = (unsigned short)27229;
unsigned char var_9 = (unsigned char)193;
int zero = 0;
unsigned char var_11 = (unsigned char)241;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16007551444753848834ULL;
int var_14 = -827461517;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1066564366U;
unsigned short var_18 = (unsigned short)43292;
signed char var_19 = (signed char)-16;
unsigned long long int var_20 = 6144108099659699654ULL;
unsigned short var_21 = (unsigned short)922;
signed char var_22 = (signed char)-68;
unsigned char var_23 = (unsigned char)249;
short var_24 = (short)3325;
unsigned long long int var_25 = 9964496813741220719ULL;
unsigned long long int var_26 = 13469198524919459599ULL;
unsigned short var_27 = (unsigned short)2523;
long long int var_28 = -6646959062796818716LL;
unsigned int var_29 = 1543551010U;
unsigned short var_30 = (unsigned short)55767;
unsigned int var_31 = 769397447U;
int var_32 = 888369120;
unsigned int var_33 = 1431137037U;
unsigned char var_34 = (unsigned char)112;
_Bool arr_5 [15] [15] [15] ;
unsigned int arr_11 [23] ;
unsigned long long int arr_13 [23] [23] [23] ;
int arr_15 [23] ;
_Bool arr_16 [23] [23] [23] [23] ;
signed char arr_18 [23] [23] [23] ;
unsigned int arr_20 [23] [23] ;
_Bool arr_24 [23] [23] ;
unsigned int arr_19 [23] [23] [23] ;
unsigned short arr_33 [23] [23] [23] ;
unsigned int arr_37 [23] [23] [23] ;
unsigned short arr_41 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 1884690035U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 144766810207941858ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -1648551725 : -360830442;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 867011654U : 1188127504U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2365233304U : 1122087514U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)16833 : (unsigned short)22737;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4171166968U : 3440441469U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56404 : (unsigned short)6499;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
