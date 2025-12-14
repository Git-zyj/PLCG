#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)17853;
long long int var_4 = -2068146480432732948LL;
signed char var_5 = (signed char)3;
unsigned long long int var_7 = 10191406791696094462ULL;
short var_8 = (short)20059;
long long int var_9 = -1754927508000195856LL;
int var_10 = -292351884;
unsigned char var_14 = (unsigned char)177;
long long int var_15 = 6255925912830394375LL;
int zero = 0;
unsigned short var_17 = (unsigned short)42560;
long long int var_18 = -7475551782014625654LL;
long long int var_19 = 2537154836763424389LL;
long long int var_20 = -4888817566677114978LL;
unsigned char arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
_Bool arr_2 [15] ;
long long int arr_4 [15] [15] ;
short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 14364526813923477224ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -3305183672298387564LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (short)17140;
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
