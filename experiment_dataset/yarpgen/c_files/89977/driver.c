#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8086;
long long int var_1 = 1201500504855752454LL;
unsigned long long int var_4 = 1773952089149503944ULL;
long long int var_5 = 3910481471705806950LL;
short var_6 = (short)20880;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3038546770U;
int zero = 0;
long long int var_10 = -8066912661486558484LL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)20325;
short var_13 = (short)13718;
unsigned long long int arr_2 [17] ;
signed char arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 7442457199991633526ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)119;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
