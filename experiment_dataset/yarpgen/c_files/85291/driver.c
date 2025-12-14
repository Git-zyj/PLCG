#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
signed char var_1 = (signed char)-47;
unsigned char var_2 = (unsigned char)76;
unsigned long long int var_3 = 4579339882526075439ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 4141444469009737203ULL;
unsigned char var_8 = (unsigned char)7;
short var_9 = (short)-22294;
unsigned short var_10 = (unsigned short)28227;
int zero = 0;
unsigned int var_11 = 749888921U;
short var_12 = (short)32135;
signed char var_13 = (signed char)-36;
int var_14 = 2083527988;
_Bool arr_0 [18] ;
unsigned int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3287093036U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
