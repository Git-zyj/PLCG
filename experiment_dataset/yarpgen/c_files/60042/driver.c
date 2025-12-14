#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned short var_1 = (unsigned short)56778;
long long int var_2 = -8891736916754350599LL;
unsigned short var_3 = (unsigned short)48618;
long long int var_7 = -8976728571572466126LL;
int var_8 = 499713246;
int var_10 = 221332210;
int var_11 = -1796710107;
int var_13 = 1653643739;
signed char var_17 = (signed char)-26;
int var_18 = 1962304727;
int zero = 0;
unsigned short var_19 = (unsigned short)28066;
int var_20 = -1464068938;
unsigned long long int var_21 = 12465575745874080437ULL;
short arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
unsigned char arr_2 [19] ;
unsigned short arr_3 [19] ;
short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)4931;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 15309509039340698013ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42916 : (unsigned short)54721;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)6223 : (short)-14640;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
