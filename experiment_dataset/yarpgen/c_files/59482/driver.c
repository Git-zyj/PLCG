#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-13722;
unsigned int var_4 = 785478647U;
signed char var_7 = (signed char)-90;
short var_8 = (short)-2288;
int zero = 0;
unsigned short var_10 = (unsigned short)5832;
unsigned int var_11 = 2113396578U;
unsigned int var_12 = 112595223U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-32067;
unsigned short arr_1 [25] ;
short arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)34004;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)31385;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
