#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1786182001U;
int var_2 = 1251586501;
long long int var_3 = 714494653275307234LL;
int var_4 = -1233543147;
long long int var_5 = -8907288881400928571LL;
unsigned short var_6 = (unsigned short)15130;
unsigned short var_7 = (unsigned short)33260;
unsigned long long int var_10 = 15816767894132150559ULL;
int zero = 0;
long long int var_11 = 4935479976546921276LL;
long long int var_12 = -976423678493730313LL;
short var_13 = (short)16411;
int var_14 = 845917822;
unsigned char var_15 = (unsigned char)249;
long long int var_16 = -1976622880086556869LL;
short arr_0 [17] ;
signed char arr_1 [17] [17] ;
int arr_3 [17] ;
short arr_4 [17] [17] ;
long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)7773;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 2108380127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (short)4479;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 5853896443780173511LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
