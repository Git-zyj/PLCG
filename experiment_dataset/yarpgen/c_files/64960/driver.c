#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8180149807429981327LL;
long long int var_5 = 2757495215479470942LL;
long long int var_8 = -4891623629125014607LL;
long long int var_14 = 4209159163273074236LL;
int zero = 0;
long long int var_18 = -6512423514290856227LL;
long long int var_19 = 3791665931327762309LL;
long long int var_20 = 4550743774286415014LL;
long long int var_21 = 6164339935108994441LL;
long long int arr_1 [23] [23] ;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -7325396433599470854LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 6262693367692802650LL;
}

void checksum() {
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
