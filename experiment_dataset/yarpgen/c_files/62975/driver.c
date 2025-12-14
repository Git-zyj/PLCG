#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1817729973;
unsigned char var_2 = (unsigned char)5;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)220;
signed char var_5 = (signed char)-109;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)154;
int zero = 0;
unsigned long long int var_10 = 2656747793035778637ULL;
unsigned char var_11 = (unsigned char)38;
unsigned char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)88 : (unsigned char)191;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
