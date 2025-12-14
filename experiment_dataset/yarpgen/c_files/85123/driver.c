#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 749968095217208475ULL;
signed char var_2 = (signed char)49;
long long int var_4 = -6323196963522950984LL;
unsigned long long int var_5 = 7226983573786862418ULL;
unsigned long long int var_10 = 10790223542921404105ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)6796;
signed char var_15 = (signed char)117;
short var_16 = (short)11333;
long long int var_17 = -8928567627413108709LL;
signed char var_18 = (signed char)118;
long long int arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned long long int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 8006390804376999507LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-27710;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 10684056011086969914ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
