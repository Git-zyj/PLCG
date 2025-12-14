#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)83;
unsigned short var_2 = (unsigned short)38158;
unsigned short var_3 = (unsigned short)5588;
unsigned long long int var_4 = 12858835773688572255ULL;
signed char var_7 = (signed char)-5;
int zero = 0;
long long int var_10 = -2194797326307997522LL;
long long int var_11 = -6759631906962207794LL;
signed char var_12 = (signed char)7;
unsigned char var_13 = (unsigned char)58;
unsigned char var_14 = (unsigned char)90;
unsigned char var_15 = (unsigned char)76;
short arr_2 [12] ;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-2557;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 17498957051835538586ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
