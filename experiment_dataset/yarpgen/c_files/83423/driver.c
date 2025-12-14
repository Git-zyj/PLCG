#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)28;
unsigned int var_6 = 519854893U;
short var_9 = (short)19988;
long long int var_10 = 1349732405376011920LL;
int var_12 = -526007369;
unsigned long long int var_13 = 2525632558979324932ULL;
int zero = 0;
signed char var_14 = (signed char)122;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-18850;
unsigned long long int arr_0 [22] ;
int arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 6133558001562042942ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1370807758;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 8924895222941968347ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
