#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)36;
unsigned short var_4 = (unsigned short)50729;
int var_5 = -182117694;
int var_7 = 311376330;
unsigned short var_8 = (unsigned short)34022;
unsigned char var_9 = (unsigned char)228;
short var_10 = (short)30941;
long long int var_12 = 3388105888477574768LL;
unsigned short var_13 = (unsigned short)3436;
signed char var_15 = (signed char)12;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 15227453031855588311ULL;
unsigned short var_19 = (unsigned short)43242;
int arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
unsigned char arr_3 [24] [24] ;
signed char arr_4 [24] ;
int arr_5 [24] ;
long long int arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -890888570;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)61721;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -569021753;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 6265177126282233573LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
