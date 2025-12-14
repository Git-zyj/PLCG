#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24512;
unsigned short var_1 = (unsigned short)12552;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1139836620U;
unsigned char var_6 = (unsigned char)150;
unsigned short var_9 = (unsigned short)19761;
int zero = 0;
unsigned char var_10 = (unsigned char)186;
unsigned short var_11 = (unsigned short)43646;
signed char var_12 = (signed char)41;
int var_13 = 1146285800;
unsigned int var_14 = 3851431674U;
unsigned int var_15 = 2296145459U;
int arr_0 [25] ;
_Bool arr_1 [25] [25] ;
unsigned long long int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1415507740;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 13407884247846680474ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
