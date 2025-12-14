#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9893151593929804309ULL;
short var_4 = (short)-2666;
unsigned int var_7 = 1405118430U;
unsigned long long int var_12 = 10390641782415030815ULL;
unsigned int var_15 = 4007591125U;
int zero = 0;
unsigned int var_16 = 559661598U;
unsigned long long int var_17 = 5711618747601417029ULL;
int var_18 = 662393694;
int var_19 = -495708467;
int var_20 = -2022689879;
int var_21 = -1878853912;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 17916513842001343690ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3630582075220886454ULL : 14838562785675296630ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
