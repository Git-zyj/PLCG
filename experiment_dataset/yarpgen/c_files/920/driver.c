#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1976249760;
int var_1 = -317137582;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)37;
short var_5 = (short)6378;
int var_7 = -177805318;
unsigned long long int var_8 = 11516236797436547369ULL;
int zero = 0;
unsigned long long int var_10 = 3864417209801237619ULL;
unsigned long long int var_11 = 6694540999387066951ULL;
unsigned int var_12 = 1303801599U;
unsigned long long int var_13 = 503345254643919777ULL;
unsigned int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2990565964U : 1036711943U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
