#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2217916160U;
unsigned short var_3 = (unsigned short)62706;
long long int var_6 = -4037026760151718504LL;
short var_10 = (short)7512;
int zero = 0;
long long int var_11 = -9148445921113458384LL;
unsigned short var_12 = (unsigned short)46988;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2845365997U;
unsigned short var_15 = (unsigned short)34521;
int var_16 = 1795206719;
_Bool arr_0 [20] ;
unsigned short arr_1 [20] [20] ;
short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)22654;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-17274 : (short)12752;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
