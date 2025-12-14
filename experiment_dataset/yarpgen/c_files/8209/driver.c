#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3184;
unsigned short var_1 = (unsigned short)55798;
unsigned int var_4 = 1737577495U;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)239;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)9484;
_Bool var_13 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)14644;
unsigned long long int var_21 = 6250504695762100950ULL;
unsigned short var_22 = (unsigned short)60018;
signed char var_23 = (signed char)74;
unsigned short var_24 = (unsigned short)54536;
unsigned char var_25 = (unsigned char)246;
_Bool var_26 = (_Bool)0;
unsigned char arr_1 [11] ;
unsigned short arr_3 [11] [11] [11] ;
signed char arr_5 [11] [11] [11] ;
signed char arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)51402;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-94 : (signed char)72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)7;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
