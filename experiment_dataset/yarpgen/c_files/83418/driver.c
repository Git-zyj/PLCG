#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5680253713551447569ULL;
long long int var_4 = -4283666344544182135LL;
unsigned short var_10 = (unsigned short)64222;
int zero = 0;
unsigned long long int var_14 = 6032527339062347580ULL;
unsigned int var_15 = 415402837U;
unsigned long long int var_16 = 10519095272542264388ULL;
short arr_0 [21] [21] ;
long long int arr_1 [21] ;
short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)18422;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -796451601672448221LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-30732;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
