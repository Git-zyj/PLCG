#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10302;
unsigned short var_1 = (unsigned short)12966;
unsigned char var_2 = (unsigned char)137;
signed char var_8 = (signed char)40;
long long int var_9 = -7172170118194268292LL;
short var_10 = (short)19185;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-14197;
unsigned short var_13 = (unsigned short)57406;
signed char var_17 = (signed char)101;
int zero = 0;
unsigned long long int var_18 = 16557369953716868621ULL;
signed char var_19 = (signed char)-20;
signed char var_20 = (signed char)-36;
long long int var_21 = 6443907333940786341LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 18128608862859558992ULL;
signed char arr_0 [25] [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned int arr_4 [25] ;
unsigned long long int arr_5 [25] [25] [25] ;
short arr_10 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 12904876503546488533ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1024720616U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8864290086868155611ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)28740 : (short)4801;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
