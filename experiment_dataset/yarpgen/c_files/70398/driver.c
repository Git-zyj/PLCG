#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
short var_1 = (short)-32591;
signed char var_2 = (signed char)-22;
unsigned short var_4 = (unsigned short)9603;
unsigned long long int var_5 = 8538014773872749050ULL;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
int var_11 = 1328691076;
unsigned short var_12 = (unsigned short)12517;
int var_13 = -1506323231;
signed char var_14 = (signed char)9;
unsigned int var_15 = 3926722764U;
signed char var_16 = (signed char)-15;
unsigned int arr_0 [19] ;
unsigned short arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3441261912U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)17824;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
