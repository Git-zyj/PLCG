#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned char var_2 = (unsigned char)0;
unsigned short var_4 = (unsigned short)21252;
unsigned long long int var_5 = 9245600811062505720ULL;
int var_6 = 1728007437;
short var_8 = (short)12298;
unsigned char var_9 = (unsigned char)239;
unsigned short var_10 = (unsigned short)59893;
signed char var_11 = (signed char)-85;
int zero = 0;
unsigned int var_14 = 2459999672U;
int var_15 = 1834887588;
unsigned int var_16 = 1520935962U;
unsigned long long int var_17 = 16374617466712017396ULL;
short var_18 = (short)-19858;
signed char var_19 = (signed char)39;
short var_20 = (short)10085;
unsigned int var_21 = 2829644676U;
unsigned int arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned int arr_6 [19] [19] ;
unsigned int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2656383452U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 444870718U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 163741722U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 4248852657U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
