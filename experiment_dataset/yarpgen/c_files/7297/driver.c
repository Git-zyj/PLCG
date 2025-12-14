#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 458789264U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12532826494421053674ULL;
int var_5 = 1457129067;
unsigned short var_6 = (unsigned short)30138;
_Bool var_7 = (_Bool)0;
short var_11 = (short)-7183;
int var_12 = -1135619099;
unsigned short var_13 = (unsigned short)53338;
int var_14 = -2060805004;
short var_15 = (short)-13678;
short var_16 = (short)-13295;
signed char var_17 = (signed char)2;
int zero = 0;
signed char var_18 = (signed char)-80;
long long int var_19 = 5814656817292879519LL;
unsigned short var_20 = (unsigned short)36415;
short var_21 = (short)15336;
long long int var_22 = -8115401567732446774LL;
int var_23 = 52213196;
short var_24 = (short)-8467;
_Bool var_25 = (_Bool)0;
short arr_7 [14] [14] ;
signed char arr_8 [14] [14] ;
int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-29837 : (short)-26267;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -512291902 : -1581156548;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
