#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54858;
short var_5 = (short)1044;
signed char var_7 = (signed char)-48;
unsigned long long int var_9 = 18068809446206376045ULL;
unsigned char var_17 = (unsigned char)224;
int zero = 0;
unsigned int var_18 = 3955400782U;
unsigned int var_19 = 3737281865U;
unsigned int var_20 = 2359758407U;
unsigned long long int var_21 = 4866426165183083213ULL;
unsigned int var_22 = 198309431U;
signed char var_23 = (signed char)67;
signed char var_24 = (signed char)96;
unsigned int var_25 = 3331093151U;
int arr_0 [22] ;
int arr_4 [12] [12] ;
long long int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2031470992;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1029992511;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -4628314832021879646LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
