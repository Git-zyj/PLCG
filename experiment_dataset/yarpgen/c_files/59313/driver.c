#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -1446041027934009665LL;
long long int var_14 = 3708604340566197567LL;
int zero = 0;
long long int var_20 = -3110750376346039801LL;
int var_21 = 1866403124;
long long int var_22 = 6981918569187933889LL;
long long int var_23 = -6734924158153212677LL;
int var_24 = 1439444986;
long long int var_25 = -3464211829118800115LL;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 4559137240162028634LL;
}

void checksum() {
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
