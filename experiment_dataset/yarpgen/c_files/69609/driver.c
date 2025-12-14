#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2294583090118325671ULL;
long long int var_4 = -737021926335165363LL;
signed char var_5 = (signed char)75;
unsigned long long int var_6 = 7337871747067686884ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -6354430297369251163LL;
signed char var_14 = (signed char)24;
int zero = 0;
unsigned long long int var_15 = 8653799709118053641ULL;
unsigned char var_16 = (unsigned char)30;
unsigned short var_17 = (unsigned short)10545;
int var_18 = 470957164;
_Bool var_19 = (_Bool)1;
unsigned int arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 4065316369U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
