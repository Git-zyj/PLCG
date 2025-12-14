#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -317840090;
short var_3 = (short)25444;
unsigned long long int var_6 = 3214881368389876045ULL;
unsigned char var_8 = (unsigned char)8;
short var_13 = (short)-8429;
unsigned int var_14 = 988301184U;
int zero = 0;
unsigned long long int var_15 = 8359760649540570368ULL;
unsigned long long int var_16 = 2173530133235188075ULL;
long long int var_17 = -8836624315654505221LL;
unsigned short var_18 = (unsigned short)65507;
_Bool var_19 = (_Bool)1;
long long int arr_0 [25] ;
unsigned int arr_2 [25] [25] ;
short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -7808895358431848103LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 1892538604U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)26300;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
