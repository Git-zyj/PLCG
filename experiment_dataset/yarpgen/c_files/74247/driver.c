#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16259;
long long int var_9 = -4721929411898130314LL;
long long int var_10 = -4693926131363038664LL;
long long int var_13 = 1794356229600811533LL;
int zero = 0;
unsigned char var_17 = (unsigned char)61;
unsigned int var_18 = 1378179776U;
unsigned short var_19 = (unsigned short)11116;
unsigned short var_20 = (unsigned short)2956;
int var_21 = 1302338815;
unsigned short var_22 = (unsigned short)55296;
unsigned int var_23 = 4023799204U;
unsigned long long int arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned short arr_2 [19] ;
short arr_5 [19] [19] [19] [19] ;
unsigned int arr_9 [10] ;
short arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2720732141168336627ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3611628703U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)44644;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-5855;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 4089695329U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (short)-4711;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
