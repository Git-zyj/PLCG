#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -361862581;
unsigned int var_3 = 4215392026U;
unsigned short var_5 = (unsigned short)24867;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)53938;
unsigned short var_8 = (unsigned short)16297;
signed char var_11 = (signed char)-44;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-14673;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_20 = (short)19678;
signed char var_21 = (signed char)-34;
short var_22 = (short)-2807;
unsigned int arr_0 [20] [20] ;
_Bool arr_2 [20] ;
unsigned int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 292712190U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 612922965U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
