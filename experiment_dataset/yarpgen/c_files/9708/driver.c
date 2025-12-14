#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5320079451778958511LL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_6 = -7787900389466382331LL;
int var_7 = -1888562328;
unsigned short var_8 = (unsigned short)25740;
int var_10 = 1322352761;
int var_12 = -672175167;
unsigned short var_14 = (unsigned short)15218;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)53408;
signed char var_19 = (signed char)-122;
int zero = 0;
unsigned long long int var_20 = 3470875826543029633ULL;
int var_21 = -804977397;
signed char var_22 = (signed char)-113;
_Bool var_23 = (_Bool)0;
int var_24 = 1577801043;
unsigned long long int var_25 = 11737052192220795223ULL;
signed char var_26 = (signed char)-63;
int arr_0 [21] [21] ;
int arr_1 [21] ;
int arr_2 [21] ;
unsigned char arr_3 [21] ;
_Bool arr_4 [21] [21] ;
unsigned int arr_5 [21] ;
_Bool arr_6 [21] [21] [21] [21] ;
short arr_7 [21] [21] [21] [21] ;
unsigned int arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 799181853;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1627928304;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1103716042;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 1993954461U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-13976;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3669679022U : 854394577U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
