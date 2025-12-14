#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2532473558434932694ULL;
unsigned char var_4 = (unsigned char)106;
long long int var_10 = -8772353549986126872LL;
unsigned long long int var_13 = 4586287010140187198ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -719582885;
short var_18 = (short)-15907;
signed char arr_0 [25] [25] ;
unsigned long long int arr_2 [25] ;
int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 14450982820136767324ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -484650117;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
