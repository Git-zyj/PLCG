#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30932;
short var_2 = (short)29690;
unsigned short var_3 = (unsigned short)9431;
signed char var_6 = (signed char)119;
unsigned long long int var_8 = 2018734371406201911ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)37337;
unsigned char var_16 = (unsigned char)16;
unsigned int var_17 = 3819621451U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)66;
unsigned long long int arr_0 [12] ;
unsigned short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 13773635932869605691ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)21097;
}

void checksum() {
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
