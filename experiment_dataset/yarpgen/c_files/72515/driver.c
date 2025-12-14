#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6937;
unsigned short var_2 = (unsigned short)21302;
unsigned int var_4 = 4141537455U;
short var_6 = (short)-3713;
long long int var_8 = 5191603708409684034LL;
int zero = 0;
unsigned int var_15 = 3279910597U;
unsigned short var_16 = (unsigned short)41535;
short var_17 = (short)-614;
unsigned int var_18 = 425701433U;
short var_19 = (short)-4871;
signed char var_20 = (signed char)35;
short var_21 = (short)-29140;
short arr_6 [25] [25] ;
int arr_7 [25] ;
unsigned int arr_9 [21] ;
signed char arr_4 [20] [20] ;
unsigned int arr_10 [21] [21] ;
short arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-21228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -1700057540;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 2780609855U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 846633143U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (short)-32325;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
