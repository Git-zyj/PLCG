#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned char var_1 = (unsigned char)162;
unsigned char var_4 = (unsigned char)68;
unsigned char var_6 = (unsigned char)96;
unsigned char var_7 = (unsigned char)159;
unsigned char var_12 = (unsigned char)209;
int zero = 0;
unsigned char var_13 = (unsigned char)112;
unsigned char var_14 = (unsigned char)88;
unsigned char var_15 = (unsigned char)176;
unsigned char var_16 = (unsigned char)117;
unsigned char var_17 = (unsigned char)13;
unsigned char var_18 = (unsigned char)103;
unsigned char var_19 = (unsigned char)33;
unsigned char var_20 = (unsigned char)174;
unsigned char arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned char arr_5 [24] ;
unsigned char arr_3 [16] ;
unsigned char arr_8 [24] [24] ;
unsigned char arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)253 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)219 : (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned char)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
