#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
int var_2 = -1033618863;
unsigned short var_3 = (unsigned short)8894;
unsigned int var_4 = 4200991255U;
short var_5 = (short)2311;
_Bool var_7 = (_Bool)0;
short var_10 = (short)17466;
unsigned short var_11 = (unsigned short)24782;
short var_12 = (short)18609;
long long int var_13 = -1457903328401213297LL;
int zero = 0;
short var_14 = (short)-25785;
unsigned int var_15 = 2732212970U;
unsigned char var_16 = (unsigned char)6;
unsigned char var_17 = (unsigned char)8;
long long int var_18 = 5463942338602995076LL;
short arr_0 [17] ;
short arr_1 [17] ;
long long int arr_2 [17] [17] ;
unsigned int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)7023;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)15945;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -1610157549581470454LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1072351525U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
