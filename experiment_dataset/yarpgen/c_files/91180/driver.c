#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2573987901U;
unsigned char var_8 = (unsigned char)76;
long long int var_13 = 2689695192268381201LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -4435772252512067696LL;
unsigned char var_17 = (unsigned char)83;
unsigned long long int arr_0 [11] [11] ;
signed char arr_1 [11] [11] ;
long long int arr_2 [11] ;
long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 8480227779951765133ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -5380701833431762608LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -8371561547718217256LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
