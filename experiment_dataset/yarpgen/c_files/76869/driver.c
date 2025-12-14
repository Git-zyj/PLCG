#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)184;
unsigned short var_8 = (unsigned short)16914;
unsigned short var_10 = (unsigned short)37377;
unsigned char var_11 = (unsigned char)207;
unsigned short var_13 = (unsigned short)2328;
unsigned char var_14 = (unsigned char)69;
unsigned char var_17 = (unsigned char)182;
int zero = 0;
unsigned int var_19 = 1315800744U;
unsigned short var_20 = (unsigned short)6358;
unsigned int var_21 = 3526270226U;
unsigned int var_22 = 68869610U;
unsigned char var_23 = (unsigned char)113;
unsigned int var_24 = 1631052085U;
unsigned short arr_1 [16] [16] ;
unsigned char arr_2 [16] ;
unsigned char arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)25857;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)21001;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
