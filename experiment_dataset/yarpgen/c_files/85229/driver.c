#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4168314059U;
short var_1 = (short)-16916;
signed char var_3 = (signed char)-16;
unsigned char var_4 = (unsigned char)78;
short var_5 = (short)-29395;
short var_6 = (short)-7996;
int var_8 = -2103108749;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 6510876884707188934ULL;
unsigned int var_12 = 4229285401U;
unsigned long long int var_16 = 16721854086373977142ULL;
int zero = 0;
long long int var_17 = 3548096716296895661LL;
unsigned short var_18 = (unsigned short)12398;
unsigned int var_19 = 1152078011U;
unsigned short var_20 = (unsigned short)16110;
signed char var_21 = (signed char)-122;
signed char var_22 = (signed char)58;
unsigned int var_23 = 2819919797U;
_Bool arr_0 [21] ;
int arr_1 [21] ;
short arr_7 [21] ;
_Bool arr_8 [21] [21] ;
long long int arr_3 [21] ;
short arr_4 [21] ;
long long int arr_5 [21] [21] ;
int arr_6 [21] ;
signed char arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -111678331;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)12900 : (short)14882;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1883893040758103213LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-6239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 1779043933366080812LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1754691612;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-106 : (signed char)-26;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
