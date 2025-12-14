#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)23182;
signed char var_3 = (signed char)(-127 - 1);
unsigned char var_4 = (unsigned char)179;
int var_5 = 166143084;
signed char var_6 = (signed char)-44;
int var_7 = -1894998553;
signed char var_8 = (signed char)-30;
signed char var_9 = (signed char)-108;
unsigned int var_12 = 661704425U;
int zero = 0;
unsigned int var_13 = 2693283171U;
unsigned short var_14 = (unsigned short)40072;
int var_15 = -1923135058;
long long int var_16 = -2101434358504889725LL;
unsigned short var_17 = (unsigned short)5076;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)11;
signed char arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-63;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
