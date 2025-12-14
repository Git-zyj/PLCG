#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3724030047891646948LL;
unsigned long long int var_1 = 17331915758388638807ULL;
int var_5 = -2052732989;
long long int var_8 = -2631968001446809578LL;
long long int var_9 = 1939432768735662009LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)26501;
int zero = 0;
unsigned int var_15 = 3927319081U;
unsigned long long int var_16 = 247896584683260719ULL;
long long int var_17 = 8072910681533025636LL;
_Bool var_18 = (_Bool)1;
unsigned int arr_5 [11] [11] ;
unsigned int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3366401663U : 1355169365U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2510684424U : 3876122884U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
