#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)28;
signed char var_10 = (signed char)95;
unsigned int var_12 = 4256454063U;
long long int var_19 = -2957045809635523927LL;
int zero = 0;
unsigned int var_20 = 2048429965U;
unsigned char var_21 = (unsigned char)153;
signed char var_22 = (signed char)17;
signed char var_23 = (signed char)98;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 326532069U;
unsigned short var_26 = (unsigned short)50126;
unsigned long long int arr_0 [24] ;
unsigned char arr_8 [24] ;
long long int arr_15 [24] [24] [24] [24] [24] ;
unsigned int arr_16 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 18151443455216929576ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 4480234029656681690LL : -8944929808909177751LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 129860328U : 4037039625U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
