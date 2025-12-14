#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
unsigned char var_3 = (unsigned char)253;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)10808;
short var_7 = (short)4361;
_Bool var_9 = (_Bool)0;
long long int var_12 = 3255960355795717834LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1810983204U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-123;
unsigned int var_19 = 3473629286U;
_Bool arr_0 [10] ;
unsigned int arr_1 [10] ;
_Bool arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1090623735U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
