#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59217;
unsigned long long int var_3 = 9964282550242512454ULL;
unsigned long long int var_5 = 7320299154048386834ULL;
unsigned int var_9 = 1484752637U;
unsigned long long int var_11 = 4489767310659720644ULL;
int zero = 0;
unsigned long long int var_13 = 7239408369445466271ULL;
short var_14 = (short)-6962;
unsigned int var_15 = 4289580691U;
long long int arr_1 [16] [16] ;
long long int arr_2 [16] [16] [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 3152414425238795531LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 8040442622583590764LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)15574;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
