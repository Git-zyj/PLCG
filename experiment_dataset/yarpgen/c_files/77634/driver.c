#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4939065062147184794LL;
signed char var_8 = (signed char)116;
unsigned int var_11 = 295148787U;
int zero = 0;
signed char var_18 = (signed char)-66;
long long int var_19 = 2543231835481580534LL;
unsigned char var_20 = (unsigned char)87;
long long int var_21 = 1941769834908066526LL;
unsigned long long int var_22 = 5438916391645562571ULL;
unsigned long long int arr_2 [12] ;
unsigned long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 10777028537336992895ULL : 8067553030495744577ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 10887077226309089588ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
