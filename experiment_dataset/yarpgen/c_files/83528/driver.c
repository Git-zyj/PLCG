#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1993749797;
unsigned int var_8 = 3979932498U;
unsigned short var_12 = (unsigned short)20881;
unsigned short var_14 = (unsigned short)12902;
unsigned long long int var_16 = 15526380654675587697ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)1916;
long long int var_20 = 3303936415572527431LL;
unsigned char var_21 = (unsigned char)25;
unsigned long long int var_22 = 1696961588405454332ULL;
int arr_0 [13] ;
long long int arr_1 [13] [13] ;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1778198821;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 9162261522843742813LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)209;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
