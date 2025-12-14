#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29561;
unsigned long long int var_3 = 13270491963616409016ULL;
short var_4 = (short)16276;
unsigned short var_5 = (unsigned short)19266;
unsigned int var_6 = 1490306219U;
signed char var_7 = (signed char)-101;
unsigned char var_8 = (unsigned char)136;
long long int var_9 = 1164588183547382624LL;
unsigned int var_12 = 4019144239U;
signed char var_13 = (signed char)16;
unsigned char var_14 = (unsigned char)230;
unsigned short var_15 = (unsigned short)39638;
int var_16 = -1591226306;
unsigned int var_18 = 4143309446U;
int zero = 0;
signed char var_20 = (signed char)-3;
signed char var_21 = (signed char)-43;
unsigned long long int var_22 = 13350092884291407747ULL;
signed char var_23 = (signed char)8;
unsigned char var_24 = (unsigned char)73;
unsigned short var_25 = (unsigned short)2268;
unsigned short var_26 = (unsigned short)63066;
unsigned short var_27 = (unsigned short)5908;
signed char var_28 = (signed char)21;
unsigned char arr_3 [22] [22] ;
signed char arr_4 [22] [22] ;
int arr_6 [22] [22] [22] ;
int arr_5 [22] ;
unsigned int arr_10 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1144207148 : -1759797080;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -457603872 : 653308428;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1159610185U : 4057737693U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
