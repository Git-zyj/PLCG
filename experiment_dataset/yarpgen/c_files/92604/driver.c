#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30763;
unsigned long long int var_2 = 8376200679628029942ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)177;
unsigned char var_8 = (unsigned char)112;
unsigned char var_11 = (unsigned char)236;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)18;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)203;
long long int var_16 = 1203260671535336262LL;
unsigned int arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
signed char arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 3261017046U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-109;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
