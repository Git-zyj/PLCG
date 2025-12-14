#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)56;
unsigned int var_4 = 494920517U;
signed char var_5 = (signed char)29;
unsigned long long int var_8 = 6726560118637970851ULL;
unsigned short var_9 = (unsigned short)59892;
unsigned char var_11 = (unsigned char)10;
long long int var_13 = 8783724887422396058LL;
long long int var_14 = -8238923789008203274LL;
short var_16 = (short)13686;
short var_17 = (short)-862;
int zero = 0;
signed char var_18 = (signed char)-99;
unsigned long long int var_19 = 14042529286114409143ULL;
long long int var_20 = -8856944233746893204LL;
unsigned long long int var_21 = 8868304394854762445ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)28445;
unsigned long long int var_24 = 390662742051896932ULL;
long long int var_25 = -3343562844205527164LL;
unsigned short var_26 = (unsigned short)9365;
unsigned long long int var_27 = 8832603333916883809ULL;
unsigned int var_28 = 3052472701U;
_Bool var_29 = (_Bool)0;
long long int var_30 = 5903593157482035473LL;
long long int arr_0 [19] [19] ;
short arr_2 [19] ;
short arr_6 [16] [16] ;
int arr_7 [16] ;
unsigned short arr_13 [18] [18] ;
int arr_14 [18] [18] [18] ;
unsigned char arr_15 [18] [18] ;
long long int arr_3 [19] ;
unsigned short arr_4 [19] ;
short arr_10 [16] [16] ;
signed char arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -7913826409137564137LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-581;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-23649;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 1038924131;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)32077;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -512966418 : -2049925333;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)156 : (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -6586039151025312456LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)48230;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-25460;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (signed char)10;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
