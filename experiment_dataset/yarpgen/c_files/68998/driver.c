#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7212346364245104032ULL;
unsigned short var_5 = (unsigned short)13430;
short var_7 = (short)27214;
unsigned long long int var_12 = 15399060913715066725ULL;
signed char var_13 = (signed char)114;
unsigned char var_18 = (unsigned char)63;
int zero = 0;
unsigned long long int var_20 = 7361533805378339447ULL;
unsigned char var_21 = (unsigned char)253;
unsigned int var_22 = 1609655842U;
long long int var_23 = -5069671913700788733LL;
short arr_2 [16] [16] ;
int arr_3 [16] ;
long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-20396;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -168109305;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3133629034487323662LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
