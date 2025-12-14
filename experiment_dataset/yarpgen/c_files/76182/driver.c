#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42270;
unsigned long long int var_4 = 9629175021723538847ULL;
unsigned int var_5 = 498325514U;
unsigned short var_6 = (unsigned short)21879;
_Bool var_7 = (_Bool)1;
long long int var_13 = -9164801864338205127LL;
int zero = 0;
long long int var_17 = 7363474402373334408LL;
unsigned short var_18 = (unsigned short)29171;
unsigned short var_19 = (unsigned short)8010;
unsigned long long int var_20 = 3018218226730810621ULL;
unsigned short var_21 = (unsigned short)9;
long long int arr_1 [14] [14] ;
unsigned int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 4172122935192009735LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1978415793U;
}

void checksum() {
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
