#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1584092069571422919ULL;
unsigned char var_7 = (unsigned char)12;
unsigned char var_10 = (unsigned char)87;
unsigned char var_11 = (unsigned char)243;
unsigned long long int var_13 = 3165079268863293453ULL;
unsigned char var_17 = (unsigned char)227;
int zero = 0;
signed char var_18 = (signed char)46;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-14;
long long int var_21 = -5513462678260062278LL;
unsigned long long int var_22 = 13569695197174653243ULL;
unsigned long long int var_23 = 509735426802590107ULL;
long long int arr_5 [21] ;
unsigned short arr_6 [21] ;
unsigned short arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 7800934306029042166LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)55141;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46104 : (unsigned short)50740;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
