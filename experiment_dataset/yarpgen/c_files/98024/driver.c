#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3225429579295392559LL;
short var_1 = (short)-19019;
unsigned short var_2 = (unsigned short)35527;
long long int var_3 = 450551359489044113LL;
unsigned int var_4 = 1647287853U;
short var_5 = (short)21524;
unsigned short var_6 = (unsigned short)27222;
unsigned long long int var_8 = 15060539299707945360ULL;
signed char var_9 = (signed char)27;
unsigned int var_10 = 2087765368U;
int zero = 0;
unsigned int var_11 = 1375597995U;
int var_12 = 1543625871;
_Bool var_13 = (_Bool)1;
int var_14 = 1647694152;
unsigned char var_15 = (unsigned char)210;
int var_16 = -199127345;
unsigned char var_17 = (unsigned char)238;
unsigned short var_18 = (unsigned short)43693;
short var_19 = (short)-3372;
short var_20 = (short)-6932;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 809698582U;
unsigned short var_23 = (unsigned short)55644;
int arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
_Bool arr_6 [21] ;
_Bool arr_7 [21] [21] [21] ;
short arr_11 [21] ;
short arr_13 [21] ;
short arr_2 [23] ;
unsigned short arr_12 [21] [21] ;
short arr_15 [21] ;
short arr_16 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -2020365664;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (short)14938;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)1636;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)29187 : (short)26028;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)57265 : (unsigned short)9488;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (short)-25414;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (short)20249;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
