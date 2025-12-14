#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)63;
long long int var_4 = -4891615576959365721LL;
int var_5 = 110359265;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_9 = 7649360097900388634LL;
short var_10 = (short)-20136;
int var_11 = 38002207;
long long int var_12 = 8803539180121303659LL;
long long int var_13 = -681461230333516047LL;
int zero = 0;
unsigned int var_14 = 4269598308U;
unsigned char var_15 = (unsigned char)112;
short var_16 = (short)-10669;
unsigned int var_17 = 739461708U;
signed char arr_1 [19] ;
int arr_2 [19] ;
short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1712450884;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-22177;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
