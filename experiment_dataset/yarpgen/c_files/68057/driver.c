#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)17537;
unsigned int var_2 = 3702285840U;
_Bool var_3 = (_Bool)0;
short var_6 = (short)25538;
long long int var_10 = -1549791390418860872LL;
unsigned char var_11 = (unsigned char)18;
long long int var_12 = 7353864324926631911LL;
unsigned long long int var_14 = 5808028120155068032ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)150;
short var_18 = (short)17584;
long long int var_19 = 5834628489354473223LL;
short var_20 = (short)-14770;
signed char var_21 = (signed char)102;
long long int arr_0 [14] ;
_Bool arr_1 [14] ;
long long int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 5320459813653887393LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -3657964034031978647LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
