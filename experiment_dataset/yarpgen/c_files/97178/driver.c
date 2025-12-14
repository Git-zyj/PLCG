#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-53;
_Bool var_4 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 14616934873378809451ULL;
unsigned long long int var_15 = 11797354321871522376ULL;
short var_17 = (short)11310;
unsigned int var_19 = 174448954U;
int zero = 0;
unsigned char var_20 = (unsigned char)219;
long long int var_21 = -5378373020070257158LL;
short var_22 = (short)14403;
unsigned short var_23 = (unsigned short)17331;
int var_24 = -830570073;
unsigned short var_25 = (unsigned short)17084;
int var_26 = 873072511;
unsigned char var_27 = (unsigned char)162;
short var_28 = (short)-27201;
short arr_0 [13] [13] ;
long long int arr_1 [13] ;
short arr_4 [13] ;
int arr_11 [13] [13] [13] [13] [13] ;
unsigned long long int arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-14283;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -5496863220559488568LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-32278;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -1996829602;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 8586967123260752597ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
