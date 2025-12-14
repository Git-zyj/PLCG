#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3740608565U;
unsigned char var_1 = (unsigned char)56;
unsigned short var_3 = (unsigned short)59212;
unsigned long long int var_9 = 16236344876444398426ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 5691573942290397693ULL;
unsigned short var_14 = (unsigned short)6676;
signed char var_15 = (signed char)64;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)27;
unsigned char var_19 = (unsigned char)14;
unsigned char arr_1 [10] ;
int arr_2 [15] ;
unsigned short arr_3 [15] ;
short arr_4 [15] ;
unsigned char arr_5 [15] [15] ;
unsigned short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1910764836;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53735 : (unsigned short)45205;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)11734;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)606 : (unsigned short)53966;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
