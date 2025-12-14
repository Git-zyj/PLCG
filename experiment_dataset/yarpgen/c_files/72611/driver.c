#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
unsigned char var_1 = (unsigned char)220;
unsigned int var_4 = 1131393738U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3472625322U;
unsigned int var_12 = 1333646326U;
unsigned char var_15 = (unsigned char)73;
unsigned int var_16 = 1816856853U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2726398166U;
unsigned int var_19 = 881256582U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3316018856U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2999393006U;
unsigned char arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 632420560U : 3758926251U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
