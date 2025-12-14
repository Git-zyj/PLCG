#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1497947362U;
long long int var_2 = 5889044233073066924LL;
short var_4 = (short)-16378;
unsigned short var_9 = (unsigned short)12464;
int zero = 0;
int var_18 = 1228398394;
int var_19 = -1195116434;
short var_20 = (short)-31326;
unsigned int var_21 = 875495203U;
int var_22 = 678543957;
unsigned long long int var_23 = 12239969630809536625ULL;
int arr_0 [16] [16] ;
signed char arr_1 [16] ;
int arr_3 [16] ;
_Bool arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1470271857;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1139222425;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
