#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5305549445020735174ULL;
unsigned int var_4 = 2786378202U;
unsigned char var_5 = (unsigned char)131;
int var_6 = 1113134381;
signed char var_12 = (signed char)65;
long long int var_13 = -2136174238986049600LL;
signed char var_16 = (signed char)-92;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1295061046;
long long int var_19 = -1245020787926253708LL;
long long int var_20 = 8538458532579097923LL;
_Bool arr_2 [14] [14] ;
unsigned char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)136;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
