#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15553393263069262274ULL;
unsigned long long int var_4 = 15754492557281136770ULL;
int var_5 = 146445985;
signed char var_7 = (signed char)111;
signed char var_11 = (signed char)111;
_Bool var_12 = (_Bool)1;
long long int var_14 = 818519372590777653LL;
unsigned long long int var_15 = 12267528140714560452ULL;
int zero = 0;
signed char var_17 = (signed char)65;
int var_18 = -2066690269;
unsigned char var_19 = (unsigned char)225;
_Bool var_20 = (_Bool)0;
long long int var_21 = -4724940673043762893LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -9178454271255512402LL;
long long int var_24 = 5942587882295650418LL;
unsigned long long int arr_0 [23] ;
int arr_1 [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_5 [23] ;
_Bool arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1168353211465402438ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1559220426;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 5165831817443002388ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
