#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1242706737;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)61486;
unsigned int var_4 = 4156254136U;
unsigned long long int var_5 = 9363374591858470929ULL;
short var_7 = (short)9262;
short var_9 = (short)2986;
short var_11 = (short)11473;
int var_12 = -2108123022;
int zero = 0;
int var_15 = 44937300;
_Bool var_16 = (_Bool)0;
int var_17 = -348285917;
_Bool arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)30632;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1499911678099127821ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
