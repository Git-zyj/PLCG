#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -787453876677840752LL;
int var_1 = 2124047619;
unsigned short var_5 = (unsigned short)39666;
long long int var_6 = -5860540965871635991LL;
int zero = 0;
short var_15 = (short)-5990;
unsigned short var_16 = (unsigned short)46679;
int var_17 = -1057991384;
unsigned short var_18 = (unsigned short)25164;
long long int arr_0 [12] [12] ;
unsigned char arr_3 [22] ;
long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -1108179116526062952LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2413978726198959059LL : 8768111653838125189LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
