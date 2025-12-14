#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5137588461122535041ULL;
unsigned char var_2 = (unsigned char)84;
short var_6 = (short)6771;
unsigned char var_9 = (unsigned char)195;
int var_12 = 1221075534;
unsigned int var_14 = 1004322610U;
int zero = 0;
unsigned char var_17 = (unsigned char)49;
unsigned short var_18 = (unsigned short)54700;
unsigned long long int var_19 = 1174064102555058563ULL;
int var_20 = -1820846145;
unsigned char var_21 = (unsigned char)201;
_Bool var_22 = (_Bool)0;
unsigned char arr_0 [15] ;
unsigned char arr_2 [15] ;
unsigned short arr_4 [15] ;
unsigned char arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)51939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)106;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
