#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
unsigned char var_1 = (unsigned char)79;
unsigned char var_4 = (unsigned char)92;
unsigned char var_5 = (unsigned char)169;
unsigned char var_6 = (unsigned char)10;
unsigned char var_7 = (unsigned char)43;
int zero = 0;
unsigned int var_11 = 2622905645U;
unsigned int var_12 = 3140827809U;
unsigned int var_13 = 3455881259U;
unsigned char var_14 = (unsigned char)159;
unsigned char var_15 = (unsigned char)102;
unsigned char var_16 = (unsigned char)73;
unsigned char var_17 = (unsigned char)125;
unsigned char var_18 = (unsigned char)59;
unsigned int arr_0 [12] [12] ;
unsigned int arr_3 [16] ;
unsigned char arr_4 [16] ;
unsigned char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 3055441137U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2233347112U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)150;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
