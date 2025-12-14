#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = 5906403513359633995LL;
signed char var_5 = (signed char)-51;
short var_7 = (short)-9494;
unsigned char var_9 = (unsigned char)157;
unsigned int var_11 = 1928117978U;
int zero = 0;
unsigned int var_12 = 2899763585U;
int var_13 = 477833938;
unsigned char var_14 = (unsigned char)114;
unsigned char var_15 = (unsigned char)16;
long long int arr_0 [18] ;
unsigned char arr_2 [18] ;
signed char arr_3 [18] ;
short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2991088794770876680LL : -4956873929984446233LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)-114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)11385 : (short)17547;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
