#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1507180957;
int var_5 = -544578084;
short var_8 = (short)24279;
unsigned long long int var_11 = 9682792466413461081ULL;
signed char var_12 = (signed char)64;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)48684;
int zero = 0;
short var_17 = (short)21778;
long long int var_18 = -3943055079223320904LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -3105784494561050497LL;
short var_21 = (short)27650;
unsigned long long int arr_1 [18] ;
signed char arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 13374675011647417516ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)110;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
