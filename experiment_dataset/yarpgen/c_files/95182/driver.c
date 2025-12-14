#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 15060450467680553297ULL;
unsigned char var_7 = (unsigned char)225;
unsigned char var_9 = (unsigned char)158;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 14085142583831939223ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)173;
_Bool arr_1 [23] [23] ;
unsigned long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 7981344346606322748ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
