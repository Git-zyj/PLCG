#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned long long int var_1 = 2552400905446543709ULL;
unsigned long long int var_2 = 13700466595785039249ULL;
short var_3 = (short)8350;
long long int var_5 = 1416059824688769782LL;
unsigned short var_6 = (unsigned short)144;
unsigned int var_9 = 4209834240U;
unsigned char var_10 = (unsigned char)47;
unsigned long long int var_11 = 9794834585770411661ULL;
long long int var_12 = 6911304490223139604LL;
int zero = 0;
unsigned int var_13 = 1629627979U;
unsigned char var_14 = (unsigned char)23;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1003439890U;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)57;
long long int var_19 = 1855179251088811847LL;
unsigned char arr_3 [24] ;
unsigned int arr_6 [11] ;
_Bool arr_13 [10] ;
unsigned char arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)145 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 894463355U : 1897488917U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
