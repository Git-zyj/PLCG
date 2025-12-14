#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12519;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)40042;
long long int var_7 = -8929309826506599783LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)53977;
int zero = 0;
long long int var_12 = 5729073797955597537LL;
unsigned short var_13 = (unsigned short)31751;
long long int var_14 = -4801469870263662405LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3558765960U;
long long int arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
_Bool arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 2163593403570875521LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1153678022U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
