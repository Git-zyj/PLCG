#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 353523938U;
unsigned char var_1 = (unsigned char)58;
unsigned long long int var_6 = 8047978152845370523ULL;
unsigned long long int var_7 = 4495664834739704956ULL;
unsigned long long int var_10 = 12122026146251560446ULL;
int zero = 0;
long long int var_12 = 5772226609964209739LL;
unsigned char var_13 = (unsigned char)167;
short var_14 = (short)31979;
int var_15 = 242291622;
long long int var_16 = -3853492781951146150LL;
unsigned long long int var_17 = 17712576125648721271ULL;
short var_18 = (short)-2470;
unsigned char var_19 = (unsigned char)78;
unsigned int var_20 = 2783927467U;
signed char arr_1 [11] [11] ;
int arr_2 [11] [11] ;
unsigned char arr_3 [16] ;
int arr_4 [16] [16] ;
signed char arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -1524366284;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -318754546;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (signed char)66;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
