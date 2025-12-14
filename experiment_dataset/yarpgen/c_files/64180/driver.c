#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6394;
long long int var_10 = 6147506588631954838LL;
short var_11 = (short)31336;
short var_12 = (short)27141;
short var_13 = (short)-13450;
unsigned int var_14 = 321911666U;
int zero = 0;
unsigned int var_18 = 1940347038U;
long long int var_19 = 3556748589760362413LL;
unsigned long long int var_20 = 3589042664837443744ULL;
long long int var_21 = -6663603673757338546LL;
int var_22 = -852883288;
unsigned short arr_2 [11] [11] [11] ;
long long int arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)53657;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -4373166289337458720LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
