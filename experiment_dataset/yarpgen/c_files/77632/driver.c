#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1762688555U;
long long int var_6 = 3264484742786900001LL;
unsigned long long int var_7 = 16799079752379955135ULL;
unsigned int var_8 = 3913941577U;
unsigned long long int var_9 = 2848081275008477084ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)74;
long long int var_11 = -3188312034343473295LL;
unsigned int var_12 = 4223719490U;
unsigned int var_13 = 2885739259U;
signed char arr_1 [22] ;
unsigned char arr_2 [22] ;
_Bool arr_5 [22] [22] [22] ;
unsigned int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)240 : (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3533759000U : 552252854U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
