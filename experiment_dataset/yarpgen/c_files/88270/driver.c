#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1847923896064044624ULL;
_Bool var_3 = (_Bool)0;
long long int var_5 = -9128019662523786468LL;
int var_8 = 1146638273;
unsigned int var_10 = 2631178438U;
unsigned long long int var_11 = 12649305685635669854ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)229;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)43;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -3653041220082221960LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
