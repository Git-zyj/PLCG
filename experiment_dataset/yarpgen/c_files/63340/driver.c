#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2300539334U;
short var_1 = (short)-5977;
int var_2 = -933204842;
unsigned int var_4 = 1941738041U;
long long int var_5 = 3150281513060684080LL;
unsigned long long int var_6 = 12545308420338995619ULL;
unsigned char var_8 = (unsigned char)45;
int zero = 0;
short var_11 = (short)30899;
unsigned int var_12 = 3425915057U;
unsigned int var_13 = 176757665U;
short arr_1 [12] ;
signed char arr_3 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)19569;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)61;
}

void checksum() {
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
