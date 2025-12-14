#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7790804198383707341LL;
unsigned short var_10 = (unsigned short)48475;
unsigned long long int var_12 = 3673874784891841888ULL;
unsigned long long int var_14 = 13724876974305448697ULL;
int zero = 0;
unsigned int var_17 = 380692842U;
unsigned short var_18 = (unsigned short)19084;
unsigned char var_19 = (unsigned char)64;
unsigned long long int var_20 = 5886618616764402459ULL;
unsigned short var_21 = (unsigned short)24415;
unsigned int var_22 = 3213595644U;
unsigned char var_23 = (unsigned char)54;
unsigned short arr_0 [15] ;
unsigned long long int arr_2 [15] [15] [15] ;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)41894;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 408979664882160927ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)55657;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
