#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
int var_3 = 1515024574;
unsigned char var_5 = (unsigned char)151;
signed char var_7 = (signed char)10;
int zero = 0;
unsigned char var_11 = (unsigned char)54;
signed char var_12 = (signed char)113;
unsigned long long int var_13 = 6367175078107525307ULL;
long long int var_14 = 61373088586571190LL;
unsigned char var_15 = (unsigned char)195;
short var_16 = (short)-17909;
signed char arr_0 [11] ;
short arr_4 [11] ;
signed char arr_9 [11] [11] [11] [11] [11] ;
unsigned char arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-29195;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)121;
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
