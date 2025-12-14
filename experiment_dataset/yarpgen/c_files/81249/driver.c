#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 324549369;
unsigned short var_4 = (unsigned short)61003;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-5487;
signed char var_12 = (signed char)15;
int zero = 0;
unsigned int var_14 = 2729229297U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4027919746809068444ULL;
int var_17 = -2061868477;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] ;
unsigned char arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3621779440U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 470831208U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)240 : (unsigned char)136;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
