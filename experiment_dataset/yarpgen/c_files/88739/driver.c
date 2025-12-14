#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3919625135U;
unsigned long long int var_12 = 6233608615893846792ULL;
unsigned char var_13 = (unsigned char)16;
short var_16 = (short)-10288;
int zero = 0;
int var_18 = -1308346723;
int var_19 = -1778275613;
short var_20 = (short)-10898;
long long int var_21 = 6714811320587622752LL;
unsigned long long int var_22 = 1796245450335073593ULL;
_Bool var_23 = (_Bool)0;
short arr_1 [10] ;
long long int arr_2 [10] [10] ;
unsigned char arr_3 [10] ;
signed char arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)11386;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -6447665328970527843LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)83;
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
