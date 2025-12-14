#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10450440450679170930ULL;
short var_1 = (short)-31550;
signed char var_3 = (signed char)-125;
int var_4 = -1809949778;
short var_5 = (short)-26222;
short var_6 = (short)2329;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1421775566;
int var_12 = -769602786;
short var_13 = (short)-12778;
short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-30128 : (short)-2768;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
