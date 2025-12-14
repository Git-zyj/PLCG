#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13950430912302953743ULL;
unsigned int var_1 = 188131446U;
unsigned int var_2 = 623153099U;
int var_3 = 482053383;
int var_4 = -1656472443;
unsigned int var_6 = 602654048U;
unsigned int var_7 = 3796027592U;
unsigned int var_8 = 446757278U;
short var_9 = (short)29925;
long long int var_10 = -1094971968308264306LL;
signed char var_11 = (signed char)-84;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-71;
int var_14 = -416280096;
unsigned int var_15 = 3532677540U;
short var_16 = (short)-11535;
unsigned long long int var_17 = 3204679307126573578ULL;
short var_18 = (short)-16808;
signed char var_19 = (signed char)-35;
signed char var_20 = (signed char)-68;
unsigned int var_21 = 1745011282U;
unsigned int var_22 = 2027826656U;
unsigned char var_23 = (unsigned char)212;
signed char var_24 = (signed char)112;
unsigned long long int var_25 = 12913639428237866486ULL;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)128;
long long int var_28 = 3576268031179197964LL;
signed char var_29 = (signed char)20;
unsigned long long int var_30 = 6161075863856753659ULL;
unsigned int var_31 = 835277016U;
unsigned int arr_0 [21] [21] ;
long long int arr_1 [21] [21] ;
_Bool arr_2 [17] ;
signed char arr_5 [17] [17] [17] ;
unsigned int arr_10 [17] [17] [17] ;
int arr_11 [17] [17] ;
_Bool arr_22 [25] ;
signed char arr_23 [25] ;
unsigned int arr_6 [17] ;
int arr_21 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1028922636U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 4310755301352539881LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2735691056U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 915489199 : -2115940878;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 530660310U : 3327282569U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 721244455;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
