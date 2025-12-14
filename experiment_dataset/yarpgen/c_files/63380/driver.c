#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
signed char var_1 = (signed char)98;
unsigned long long int var_4 = 690021885653614641ULL;
unsigned char var_7 = (unsigned char)116;
signed char var_12 = (signed char)38;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)156;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17274909362297239050ULL;
signed char arr_1 [23] ;
short arr_2 [23] ;
unsigned long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)1076;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 550530708321469694ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
