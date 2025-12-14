#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4673272635791949657LL;
int var_3 = -1392045487;
unsigned short var_5 = (unsigned short)52360;
short var_8 = (short)23612;
short var_13 = (short)25248;
_Bool var_14 = (_Bool)0;
int var_15 = -1453774190;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)2988;
long long int var_20 = 214678215586998726LL;
unsigned short var_21 = (unsigned short)60579;
int arr_1 [24] ;
int arr_3 [24] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -2022750785;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -2045935477;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 726420862048333022ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
