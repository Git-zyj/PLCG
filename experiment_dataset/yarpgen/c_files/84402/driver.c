#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -47451315;
unsigned long long int var_1 = 394061884223494627ULL;
short var_2 = (short)2903;
unsigned short var_4 = (unsigned short)32076;
short var_5 = (short)-28383;
unsigned short var_6 = (unsigned short)57534;
signed char var_8 = (signed char)49;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)49693;
int var_12 = 153746362;
int zero = 0;
int var_13 = 1769153559;
signed char var_14 = (signed char)5;
unsigned char var_15 = (unsigned char)156;
unsigned long long int var_16 = 14560752825987276320ULL;
int var_17 = -1051476260;
signed char var_18 = (signed char)57;
unsigned int var_19 = 3379574561U;
unsigned short var_20 = (unsigned short)44512;
int var_21 = 1504149557;
unsigned char var_22 = (unsigned char)30;
short var_23 = (short)-18748;
signed char var_24 = (signed char)-43;
short var_25 = (short)-3033;
unsigned long long int var_26 = 10350620588465290317ULL;
long long int var_27 = -8344612448789002800LL;
long long int var_28 = -4072111460146906394LL;
int arr_3 [17] ;
unsigned int arr_4 [17] ;
signed char arr_10 [11] ;
signed char arr_13 [11] [11] [11] ;
short arr_14 [11] [11] [11] ;
_Bool arr_21 [11] ;
signed char arr_23 [11] [11] [11] ;
signed char arr_27 [11] [11] [11] ;
int arr_39 [25] [25] ;
unsigned char arr_6 [17] [17] ;
unsigned char arr_19 [11] [11] ;
short arr_20 [11] ;
long long int arr_24 [11] [11] [11] ;
unsigned char arr_25 [11] [11] ;
int arr_26 [11] ;
unsigned short arr_32 [11] ;
short arr_33 [11] [11] [11] ;
long long int arr_34 [11] ;
unsigned char arr_38 [11] [11] ;
unsigned long long int arr_42 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -997964864;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3928699147U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)-29280;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_39 [i_0] [i_1] = -498251005;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (short)11217;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 2849183659125245619LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = -945890249;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45695 : (unsigned short)22095;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-22668 : (short)4689;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_34 [i_0] = -3536811817256234212LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 17768962785968623477ULL : 17394043754351129923ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
