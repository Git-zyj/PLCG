#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1312289919;
unsigned int var_8 = 2407566976U;
short var_10 = (short)5448;
int var_11 = 245355607;
long long int var_13 = -6692592550315601826LL;
unsigned int var_14 = 287486769U;
int zero = 0;
unsigned long long int var_16 = 8544652956827659989ULL;
unsigned int var_17 = 3899313265U;
short var_18 = (short)4466;
short var_19 = (short)28858;
short arr_0 [21] ;
unsigned int arr_2 [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-8344;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 131811890U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -1886394339;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
