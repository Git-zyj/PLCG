#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3794620090U;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 877964790U;
long long int var_10 = 2746787152056139483LL;
unsigned long long int var_12 = 8781313093478161422ULL;
int zero = 0;
short var_16 = (short)27847;
short var_17 = (short)-30155;
unsigned int var_18 = 2779251229U;
signed char var_19 = (signed char)6;
unsigned char var_20 = (unsigned char)126;
long long int var_21 = 7335164096836208906LL;
int arr_0 [18] ;
_Bool arr_1 [18] [18] ;
_Bool arr_2 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1147635941;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
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
