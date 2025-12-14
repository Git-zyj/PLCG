#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1640513143053429648LL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)1358;
long long int var_3 = -1563421082162895467LL;
signed char var_4 = (signed char)104;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 671345467U;
unsigned short var_7 = (unsigned short)42278;
unsigned long long int var_8 = 969960660458041434ULL;
int var_10 = 614657943;
int zero = 0;
long long int var_12 = 3905254372495550247LL;
long long int var_13 = -2020720425022371217LL;
short var_14 = (short)-7522;
long long int var_15 = -1495606037367770017LL;
_Bool arr_2 [23] ;
signed char arr_3 [23] [23] ;
signed char arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-89;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
