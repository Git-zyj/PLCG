#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)4951;
short var_3 = (short)-27167;
unsigned long long int var_4 = 18162990308303350323ULL;
signed char var_5 = (signed char)50;
unsigned int var_6 = 1737839387U;
signed char var_7 = (signed char)-116;
_Bool var_8 = (_Bool)0;
long long int var_9 = -3371785251125302670LL;
unsigned short var_10 = (unsigned short)22432;
unsigned short var_12 = (unsigned short)56005;
unsigned int var_13 = 2954296995U;
unsigned short var_14 = (unsigned short)59790;
signed char var_15 = (signed char)-54;
int var_16 = 861076409;
unsigned char var_18 = (unsigned char)96;
int zero = 0;
short var_19 = (short)-24775;
unsigned long long int var_20 = 1705596359184317108ULL;
unsigned short var_21 = (unsigned short)14052;
short var_22 = (short)-24196;
unsigned int arr_0 [19] ;
signed char arr_2 [19] [19] ;
unsigned long long int arr_3 [19] [19] ;
unsigned int arr_4 [19] [19] ;
_Bool arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2552860336U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 18214604403521471857ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 3482461431U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
