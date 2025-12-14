#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)110;
signed char var_4 = (signed char)-64;
unsigned char var_7 = (unsigned char)15;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)11365;
int var_13 = 1417658166;
_Bool var_14 = (_Bool)0;
int var_15 = 13895859;
unsigned short arr_3 [17] ;
int arr_4 [17] ;
_Bool arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)24354;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1513802959;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
