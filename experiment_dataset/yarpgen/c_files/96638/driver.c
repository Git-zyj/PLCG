#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-64;
short var_7 = (short)24391;
unsigned long long int var_8 = 5037061864329987259ULL;
unsigned int var_10 = 3196729971U;
unsigned char var_12 = (unsigned char)151;
int zero = 0;
short var_14 = (short)3587;
unsigned short var_15 = (unsigned short)30369;
short var_16 = (short)2854;
long long int var_17 = -5943749954284975837LL;
long long int var_18 = 7994208416507288212LL;
unsigned char var_19 = (unsigned char)243;
unsigned long long int var_20 = 3116328325575914565ULL;
unsigned long long int arr_1 [12] ;
long long int arr_2 [12] [12] ;
unsigned int arr_8 [24] ;
short arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2909220817932851257ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 4966719499901151681LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 1023084141U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)24030;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
