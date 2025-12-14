#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1582160218U;
unsigned char var_8 = (unsigned char)33;
long long int var_11 = -1362957608650258528LL;
int zero = 0;
int var_13 = -1640642408;
unsigned short var_14 = (unsigned short)12142;
unsigned char var_15 = (unsigned char)0;
unsigned char var_16 = (unsigned char)108;
unsigned char arr_0 [18] ;
int arr_1 [18] [18] ;
unsigned long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 1345203819;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 17533326509576749396ULL;
}

void checksum() {
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
