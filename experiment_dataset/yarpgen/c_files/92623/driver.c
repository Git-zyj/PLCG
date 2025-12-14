#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33970;
unsigned long long int var_1 = 12335624749060196767ULL;
unsigned short var_3 = (unsigned short)10649;
unsigned short var_7 = (unsigned short)47219;
unsigned long long int var_8 = 18412090887653680607ULL;
signed char var_9 = (signed char)-50;
int zero = 0;
unsigned char var_12 = (unsigned char)120;
unsigned char var_13 = (unsigned char)59;
unsigned int var_14 = 47332266U;
unsigned long long int var_15 = 2389935678521628329ULL;
long long int var_16 = -5039981169671702715LL;
unsigned short var_17 = (unsigned short)62784;
unsigned char var_18 = (unsigned char)186;
signed char arr_1 [11] [11] ;
long long int arr_2 [22] ;
int arr_3 [22] [22] ;
unsigned char arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -3036488162229629952LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -2025091787;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)136;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
