#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)78;
int var_1 = 560005740;
unsigned int var_2 = 166473453U;
signed char var_3 = (signed char)-23;
unsigned short var_5 = (unsigned short)24616;
int var_7 = 1680594971;
unsigned long long int var_9 = 3624474023856142704ULL;
int zero = 0;
long long int var_10 = -947721772077100914LL;
unsigned int var_11 = 2194617951U;
unsigned char var_12 = (unsigned char)88;
short var_13 = (short)-21480;
unsigned long long int var_14 = 2242945208825651476ULL;
short var_15 = (short)16810;
unsigned long long int arr_0 [10] ;
long long int arr_2 [10] ;
short arr_3 [10] ;
unsigned long long int arr_6 [10] [10] [10] ;
unsigned long long int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 8570793769140454650ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3295316101577494096LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-971;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3404077322463659811ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 2145152246615802737ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
