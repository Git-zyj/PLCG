#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2228543703U;
unsigned long long int var_6 = 14400215492914006582ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)192;
long long int var_13 = 7333830409959419577LL;
unsigned int var_16 = 1662049443U;
int zero = 0;
unsigned char var_18 = (unsigned char)30;
long long int var_19 = 8862500534321332808LL;
long long int var_20 = -2972765348222062291LL;
_Bool var_21 = (_Bool)0;
int arr_13 [21] ;
long long int arr_26 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -1569532027 : 1077792451;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 852543769642427646LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
