#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44973;
unsigned int var_6 = 15246886U;
unsigned int var_8 = 3865434062U;
unsigned char var_9 = (unsigned char)209;
int zero = 0;
unsigned int var_10 = 3369020572U;
unsigned char var_11 = (unsigned char)237;
unsigned long long int var_12 = 8403230827545102328ULL;
unsigned short var_13 = (unsigned short)18935;
unsigned short arr_0 [18] ;
_Bool arr_1 [18] ;
int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)17421;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1197137378;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
