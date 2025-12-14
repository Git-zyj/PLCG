#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)17601;
long long int var_6 = 6447036542675633619LL;
short var_7 = (short)-24233;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-91;
unsigned short var_12 = (unsigned short)51543;
long long int var_13 = 7320749656809018806LL;
long long int var_14 = -3440461302255232958LL;
_Bool var_15 = (_Bool)0;
signed char arr_2 [19] ;
short arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)8639;
}

void checksum() {
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
