#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5529455779183986328LL;
unsigned long long int var_1 = 11003146823443293707ULL;
long long int var_2 = -5306485030310820806LL;
unsigned char var_3 = (unsigned char)121;
signed char var_4 = (signed char)100;
unsigned long long int var_5 = 8037378335923477049ULL;
long long int var_6 = -8395254186416019004LL;
unsigned int var_7 = 1184661444U;
unsigned char var_8 = (unsigned char)92;
long long int var_9 = 9203846411467497906LL;
unsigned char var_10 = (unsigned char)75;
unsigned char var_11 = (unsigned char)30;
int zero = 0;
long long int var_12 = -2896148616759299969LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)12436;
unsigned long long int var_15 = 6126235814328003244ULL;
_Bool arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
