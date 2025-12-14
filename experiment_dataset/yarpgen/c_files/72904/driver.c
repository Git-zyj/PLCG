#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1203529376U;
unsigned int var_2 = 2258906438U;
unsigned int var_4 = 2252744452U;
unsigned long long int var_8 = 12179795859104536488ULL;
signed char var_9 = (signed char)-113;
int zero = 0;
long long int var_10 = -5054618841618490993LL;
unsigned char var_11 = (unsigned char)118;
int var_12 = -1777198033;
short var_13 = (short)-19235;
short arr_0 [12] ;
signed char arr_4 [12] ;
signed char arr_6 [12] [12] ;
long long int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-3432;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -5330833251058869377LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
