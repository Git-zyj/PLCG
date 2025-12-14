#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 59060953U;
long long int var_1 = -7906200877962266348LL;
int var_2 = 2066692562;
unsigned short var_5 = (unsigned short)19023;
unsigned int var_8 = 945422208U;
long long int var_9 = -4002163895751322183LL;
long long int var_10 = -4729368261881376746LL;
long long int var_11 = 7397650461682629684LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 4034179336269106737LL;
int var_14 = 511514459;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = 1700322670642011295LL;
short var_18 = (short)-18074;
int var_19 = -1847972898;
unsigned short var_20 = (unsigned short)29916;
unsigned short var_21 = (unsigned short)3019;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)148;
int var_24 = -1216248693;
long long int var_25 = -3492619795919586275LL;
int var_26 = 495320077;
signed char var_27 = (signed char)78;
_Bool var_28 = (_Bool)0;
long long int var_29 = -5978454469290325424LL;
int arr_0 [23] [23] ;
unsigned int arr_1 [23] [23] ;
long long int arr_3 [21] [21] ;
_Bool arr_5 [25] ;
long long int arr_6 [25] [25] ;
unsigned int arr_7 [25] [25] ;
unsigned int arr_9 [20] ;
long long int arr_10 [20] ;
short arr_11 [20] ;
signed char arr_13 [11] ;
long long int arr_15 [11] [11] ;
long long int arr_19 [11] [11] ;
long long int arr_24 [14] [14] [14] ;
short arr_2 [23] ;
long long int arr_8 [25] ;
unsigned short arr_12 [20] [20] ;
_Bool arr_16 [11] ;
int arr_20 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -1994362006 : -1610507508;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 4214625654U : 313153197U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -8979933754183898638LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 959600332852362802LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 1816892314U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 1513771456U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -4570252448922797812LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (short)-31228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = -557967441040448932LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? -7922135759583122957LL : -2603613392859749624LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 8897435631401448016LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-19732 : (short)-16762;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 9093161467986551937LL : -7966340412096538378LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)6944;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? -1047851084 : -1006843068;
}

void checksum() {
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
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
