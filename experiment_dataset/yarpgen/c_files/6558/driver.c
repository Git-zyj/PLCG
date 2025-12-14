#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3255316544U;
signed char var_1 = (signed char)-78;
signed char var_2 = (signed char)84;
short var_3 = (short)-23518;
signed char var_4 = (signed char)68;
unsigned short var_5 = (unsigned short)35789;
unsigned int var_6 = 1160772606U;
unsigned short var_8 = (unsigned short)39684;
signed char var_10 = (signed char)-11;
unsigned short var_11 = (unsigned short)36544;
unsigned short var_12 = (unsigned short)51369;
int var_14 = 769432013;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1934288469;
signed char var_17 = (signed char)11;
signed char var_18 = (signed char)21;
unsigned short var_19 = (unsigned short)43718;
unsigned short var_20 = (unsigned short)58819;
signed char var_21 = (signed char)8;
int var_22 = 1229085156;
unsigned int arr_3 [20] ;
short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1265504953U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)21174;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
