#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
unsigned char var_5 = (unsigned char)105;
unsigned char var_6 = (unsigned char)169;
unsigned short var_8 = (unsigned short)22970;
unsigned int var_12 = 434757322U;
int zero = 0;
unsigned long long int var_14 = 1595209782223515356ULL;
short var_15 = (short)-15686;
long long int var_16 = -8151662020389792133LL;
int var_17 = -1776260595;
unsigned long long int arr_1 [21] ;
int arr_2 [21] [21] ;
short arr_4 [21] ;
unsigned int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 13087704927241578127ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -1361534822;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)24029;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 662142226U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
