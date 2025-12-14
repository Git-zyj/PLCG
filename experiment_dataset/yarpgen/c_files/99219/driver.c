#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1649885633311814776LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1783566465696611458LL;
unsigned char var_11 = (unsigned char)220;
int zero = 0;
unsigned char var_14 = (unsigned char)186;
unsigned char var_15 = (unsigned char)161;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)88;
long long int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 5159765843682829965LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1450035687U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
