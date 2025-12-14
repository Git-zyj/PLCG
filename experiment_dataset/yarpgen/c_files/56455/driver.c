#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4183296669U;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3317335641U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)54025;
int var_6 = 461415971;
unsigned int var_7 = 3818166698U;
int var_8 = -75840493;
unsigned short var_10 = (unsigned short)5459;
int zero = 0;
long long int var_11 = 4296447116911500042LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1395466646244293753LL;
int var_14 = -1956227633;
unsigned long long int var_15 = 17814741464657427479ULL;
unsigned long long int arr_0 [19] [19] ;
long long int arr_5 [14] [14] ;
int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 16344111414345527159ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3227987508700994081LL : 3634770245291757060LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -2113398925;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
