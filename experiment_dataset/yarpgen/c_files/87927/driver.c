#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1012732793;
long long int var_10 = 5867661362533832850LL;
short var_11 = (short)15844;
unsigned char var_16 = (unsigned char)102;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)11124;
unsigned short var_21 = (unsigned short)1580;
signed char var_22 = (signed char)-2;
unsigned short var_23 = (unsigned short)53934;
unsigned int arr_1 [20] ;
int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2427983321U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 423431452;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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
