#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35660;
short var_2 = (short)22328;
long long int var_3 = 8700354762482466913LL;
unsigned short var_4 = (unsigned short)61113;
unsigned char var_6 = (unsigned char)241;
unsigned short var_8 = (unsigned short)8878;
signed char var_10 = (signed char)106;
unsigned short var_11 = (unsigned short)54840;
unsigned short var_13 = (unsigned short)65029;
short var_14 = (short)26801;
unsigned char var_17 = (unsigned char)213;
unsigned int var_18 = 977965934U;
int zero = 0;
unsigned int var_19 = 4219823333U;
unsigned char var_20 = (unsigned char)97;
short var_21 = (short)-18712;
unsigned int var_22 = 1426115272U;
unsigned short var_23 = (unsigned short)20565;
unsigned short var_24 = (unsigned short)10659;
signed char var_25 = (signed char)86;
unsigned int var_26 = 1950092399U;
unsigned int var_27 = 3227141965U;
int arr_0 [20] [20] ;
int arr_3 [20] ;
short arr_4 [20] [20] ;
int arr_5 [20] ;
_Bool arr_12 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 106530926;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1667421102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)469 : (short)1129;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1205248809 : -2047496559;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
