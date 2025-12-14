#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8361;
long long int var_2 = -1562269268327629887LL;
unsigned long long int var_6 = 1842254443735612909ULL;
signed char var_10 = (signed char)-86;
unsigned int var_12 = 4096241451U;
signed char var_16 = (signed char)94;
signed char var_17 = (signed char)-66;
signed char var_18 = (signed char)24;
int zero = 0;
signed char var_19 = (signed char)56;
signed char var_20 = (signed char)-121;
unsigned short var_21 = (unsigned short)10935;
unsigned int var_22 = 4001408769U;
unsigned long long int var_23 = 13080869400321939795ULL;
int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -797953835;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
