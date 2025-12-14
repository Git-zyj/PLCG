#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)212;
unsigned char var_4 = (unsigned char)13;
unsigned int var_6 = 3764441950U;
int var_11 = -591086047;
signed char var_12 = (signed char)91;
unsigned int var_14 = 3337891330U;
unsigned long long int var_15 = 1808612456399408144ULL;
unsigned int var_17 = 2123044378U;
int zero = 0;
signed char var_19 = (signed char)60;
short var_20 = (short)16089;
unsigned long long int var_21 = 13595171750003084147ULL;
unsigned long long int var_22 = 5298045706469492815ULL;
short var_23 = (short)1624;
unsigned int arr_0 [20] ;
unsigned char arr_1 [20] ;
unsigned int arr_2 [20] [20] ;
int arr_5 [17] ;
short arr_6 [17] [17] ;
unsigned char arr_3 [20] [20] ;
unsigned char arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 614371457U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 259414552U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -1845787813;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)7986;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)95;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
