#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2994210076U;
unsigned long long int var_1 = 10360055767948653765ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)25329;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-20996;
unsigned short var_7 = (unsigned short)42440;
unsigned char var_8 = (unsigned char)52;
int zero = 0;
int var_10 = 1386800251;
unsigned short var_11 = (unsigned short)46503;
int var_12 = 1315272751;
short var_13 = (short)24140;
signed char var_14 = (signed char)-59;
short arr_0 [21] ;
signed char arr_1 [21] ;
unsigned int arr_2 [21] ;
long long int arr_3 [21] [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-1292;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3290551876U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -6623517123666664144LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -1736842210;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
