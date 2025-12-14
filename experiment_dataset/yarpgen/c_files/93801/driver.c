#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)210;
short var_3 = (short)6908;
short var_4 = (short)-11970;
unsigned int var_6 = 3907286070U;
signed char var_7 = (signed char)53;
unsigned int var_8 = 825774159U;
int var_10 = 357462653;
_Bool var_13 = (_Bool)1;
int var_14 = -1778333407;
int zero = 0;
unsigned int var_15 = 400634695U;
unsigned int var_16 = 3972383765U;
int var_17 = -1607460889;
_Bool arr_0 [25] ;
long long int arr_1 [25] ;
_Bool arr_2 [25] [25] ;
short arr_3 [25] ;
short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1777635240726369479LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)14923;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)10438;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
