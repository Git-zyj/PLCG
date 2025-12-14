#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36404;
unsigned long long int var_3 = 12518729923409598174ULL;
signed char var_5 = (signed char)-87;
unsigned long long int var_7 = 11407724907477437969ULL;
int var_8 = 17773388;
signed char var_11 = (signed char)-7;
unsigned short var_14 = (unsigned short)8033;
int zero = 0;
signed char var_17 = (signed char)-100;
unsigned long long int var_18 = 4005645573695865681ULL;
unsigned short var_19 = (unsigned short)3181;
unsigned long long int var_20 = 3467383121799516555ULL;
unsigned char var_21 = (unsigned char)123;
unsigned long long int var_22 = 4288997387782070296ULL;
int var_23 = -1822812895;
signed char arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
signed char arr_2 [20] [20] [20] ;
signed char arr_3 [20] [20] ;
unsigned long long int arr_4 [11] ;
int arr_5 [11] [11] ;
unsigned short arr_6 [11] [11] [11] ;
unsigned short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9743509794864887864ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 17909093894905534792ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -956195081;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)564;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)25328;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
