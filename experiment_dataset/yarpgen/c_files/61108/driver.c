#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3366;
short var_2 = (short)17081;
unsigned int var_6 = 1190173923U;
int var_7 = -1991752429;
unsigned short var_9 = (unsigned short)18466;
unsigned int var_10 = 2177561487U;
long long int var_16 = -8249003619764946636LL;
int zero = 0;
int var_17 = -1506288497;
unsigned int var_18 = 1760185476U;
unsigned int var_19 = 2473744459U;
signed char var_20 = (signed char)-20;
int arr_2 [13] [13] ;
signed char arr_3 [13] [13] ;
unsigned char arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -694607644;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)102;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
