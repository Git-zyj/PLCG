#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8450807824977929568LL;
long long int var_2 = -2011275391377036595LL;
long long int var_3 = 7113738177046403977LL;
long long int var_5 = 1043555868901126273LL;
long long int var_6 = -9086106818795552825LL;
long long int var_8 = 2136070615960861162LL;
int zero = 0;
long long int var_13 = -3830595159375486558LL;
long long int var_14 = 768925378822335917LL;
long long int var_15 = 3010332695548365956LL;
long long int var_16 = -3384718791670014988LL;
long long int arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -8865167104197329962LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
