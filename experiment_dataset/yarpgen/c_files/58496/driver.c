#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)61;
int zero = 0;
unsigned char var_13 = (unsigned char)179;
unsigned int var_14 = 3513334956U;
unsigned long long int var_15 = 17152601939432301538ULL;
unsigned int var_16 = 3830755316U;
unsigned short var_17 = (unsigned short)3431;
short var_18 = (short)-11934;
unsigned short var_19 = (unsigned short)28437;
short var_20 = (short)1129;
unsigned char var_21 = (unsigned char)85;
unsigned char var_22 = (unsigned char)63;
unsigned long long int arr_22 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 1971270368498388527ULL : 9443574313677353387ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
