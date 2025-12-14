#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15224;
short var_1 = (short)-13718;
short var_2 = (short)6092;
long long int var_3 = 3362979721600910001LL;
short var_4 = (short)-16474;
short var_7 = (short)31980;
short var_8 = (short)14429;
short var_10 = (short)25893;
int zero = 0;
signed char var_11 = (signed char)-86;
signed char var_12 = (signed char)-18;
unsigned int var_13 = 267665108U;
short var_14 = (short)26731;
short var_15 = (short)-11828;
unsigned long long int arr_0 [12] ;
unsigned char arr_1 [12] ;
_Bool arr_2 [12] ;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 6501960902688628885ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 17809043890182367376ULL;
}

void checksum() {
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
