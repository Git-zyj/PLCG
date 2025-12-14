#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1755898506U;
signed char var_1 = (signed char)18;
signed char var_2 = (signed char)-44;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-22968;
signed char var_5 = (signed char)-105;
int var_7 = -1908935859;
unsigned short var_10 = (unsigned short)50120;
signed char var_11 = (signed char)-34;
signed char var_13 = (signed char)87;
int zero = 0;
signed char var_14 = (signed char)-22;
signed char var_15 = (signed char)20;
unsigned short var_16 = (unsigned short)8312;
signed char var_17 = (signed char)34;
short arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-10377;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
