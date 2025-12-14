#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1808195515456414849LL;
unsigned short var_2 = (unsigned short)34514;
unsigned short var_3 = (unsigned short)8311;
unsigned long long int var_5 = 2193382452646527251ULL;
unsigned short var_6 = (unsigned short)27995;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)30594;
short var_12 = (short)1138;
unsigned short var_15 = (unsigned short)2649;
short var_16 = (short)26695;
unsigned long long int var_17 = 10145589247616858438ULL;
int zero = 0;
int var_18 = -2056168765;
short var_19 = (short)-28505;
signed char var_20 = (signed char)85;
int var_21 = 899269317;
int var_22 = -438591794;
long long int var_23 = -7329145884721142850LL;
signed char var_24 = (signed char)101;
unsigned long long int var_25 = 3930310266247686491ULL;
int var_26 = -945033175;
unsigned char var_27 = (unsigned char)37;
_Bool var_28 = (_Bool)0;
short arr_1 [18] ;
unsigned long long int arr_2 [18] [18] [18] ;
unsigned char arr_3 [18] ;
signed char arr_4 [18] [18] [18] [18] ;
unsigned char arr_5 [18] [18] [18] ;
unsigned short arr_6 [13] ;
int arr_7 [13] ;
int arr_13 [11] [11] [11] ;
short arr_15 [11] [11] [11] ;
int arr_8 [13] ;
_Bool arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-28143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 9145914265240619116ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-104 : (signed char)-48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)29028;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -1271520038;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1902986201;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)16641;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 450957653;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
