#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16907155539896922863ULL;
unsigned int var_3 = 4157942089U;
short var_4 = (short)-6395;
unsigned short var_5 = (unsigned short)60172;
unsigned int var_7 = 276232094U;
unsigned short var_9 = (unsigned short)29611;
unsigned short var_14 = (unsigned short)16497;
unsigned short var_15 = (unsigned short)24062;
unsigned short var_16 = (unsigned short)26247;
short var_17 = (short)-11898;
int zero = 0;
long long int var_18 = 2195289188799893181LL;
unsigned int var_19 = 1899834762U;
unsigned char var_20 = (unsigned char)15;
unsigned short var_21 = (unsigned short)23330;
unsigned short arr_1 [24] ;
long long int arr_2 [24] ;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)22594;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1631122019397186948LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)33248;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
