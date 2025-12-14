#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7236916651220635799ULL;
unsigned long long int var_3 = 9074926568663107771ULL;
_Bool var_4 = (_Bool)1;
int var_7 = -417218665;
signed char var_8 = (signed char)6;
long long int var_9 = 2213596910941935610LL;
signed char var_12 = (signed char)19;
unsigned short var_13 = (unsigned short)35917;
int var_14 = -1242387726;
int zero = 0;
unsigned short var_16 = (unsigned short)22709;
short var_17 = (short)-7533;
int var_18 = 2127287890;
_Bool var_19 = (_Bool)0;
int var_20 = -815732948;
unsigned short var_21 = (unsigned short)20092;
int arr_0 [17] ;
long long int arr_1 [17] ;
int arr_2 [17] ;
signed char arr_3 [17] [17] ;
unsigned short arr_4 [17] ;
unsigned short arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 513424063;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 4373932834425962273LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2028816314;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)52321;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)64959;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
