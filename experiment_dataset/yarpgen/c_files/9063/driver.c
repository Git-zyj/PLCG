#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned char var_1 = (unsigned char)221;
_Bool var_6 = (_Bool)0;
unsigned char var_14 = (unsigned char)88;
long long int var_15 = -4867723419557613937LL;
long long int var_16 = 7066948738069682182LL;
long long int var_17 = -7706936097901546003LL;
int zero = 0;
long long int var_18 = -4214860346742103754LL;
unsigned short var_19 = (unsigned short)29155;
long long int var_20 = -5367408373599316234LL;
unsigned long long int var_21 = 3261090569250756276ULL;
short var_22 = (short)24754;
unsigned int var_23 = 1734569465U;
long long int var_24 = -2614089530950216322LL;
long long int var_25 = 7419778812245623194LL;
unsigned long long int arr_0 [11] ;
short arr_3 [11] ;
unsigned char arr_5 [18] ;
long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 11071149727965466967ULL : 18121140257039028678ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-17994;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 6927816566285439183LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
