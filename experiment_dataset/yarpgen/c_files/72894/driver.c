#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1540;
unsigned short var_8 = (unsigned short)7050;
unsigned int var_10 = 458068059U;
unsigned int var_12 = 922719234U;
unsigned int var_13 = 301132161U;
unsigned char var_14 = (unsigned char)120;
short var_17 = (short)-16352;
int zero = 0;
short var_18 = (short)-3611;
unsigned int var_19 = 912990227U;
long long int var_20 = -3104637442505975167LL;
unsigned int var_21 = 631319382U;
unsigned short arr_0 [20] ;
long long int arr_2 [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)39836;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1075000468080612191LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3894636605180380054LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
