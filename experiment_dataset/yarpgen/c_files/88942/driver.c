#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 511393380U;
unsigned int var_2 = 1209372174U;
int var_5 = -306840983;
signed char var_6 = (signed char)-45;
int zero = 0;
int var_10 = -179077657;
_Bool var_11 = (_Bool)0;
int var_12 = -2061785687;
unsigned int var_13 = 996795587U;
signed char var_14 = (signed char)34;
unsigned char var_15 = (unsigned char)99;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7499 : (unsigned short)26297;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
