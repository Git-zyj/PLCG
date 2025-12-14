#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1382344736305402521ULL;
short var_4 = (short)1652;
signed char var_5 = (signed char)29;
unsigned int var_16 = 3271405271U;
int zero = 0;
short var_19 = (short)23186;
signed char var_20 = (signed char)-97;
unsigned int var_21 = 840468613U;
unsigned int arr_0 [18] ;
unsigned int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2259401839U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2759113403U;
}

void checksum() {
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
