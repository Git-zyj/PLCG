#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-81;
unsigned short var_3 = (unsigned short)15033;
long long int var_4 = -4014114594603396496LL;
unsigned short var_5 = (unsigned short)63077;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)44;
long long int var_8 = -563052964495004273LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)36974;
long long int var_11 = -1642010396964079850LL;
unsigned int var_12 = 51915584U;
unsigned int var_13 = 1464142499U;
unsigned int var_14 = 1336322283U;
signed char var_15 = (signed char)54;
unsigned short var_16 = (unsigned short)51342;
unsigned int var_17 = 3825421709U;
signed char var_18 = (signed char)-111;
_Bool var_19 = (_Bool)0;
int var_20 = -350152054;
unsigned int arr_1 [25] ;
_Bool arr_3 [23] ;
int arr_4 [23] ;
_Bool arr_2 [25] [25] ;
_Bool arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 787289068U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -2000711992;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
