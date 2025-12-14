#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3937752998U;
unsigned int var_5 = 2768355396U;
unsigned int var_7 = 3817804897U;
unsigned int var_8 = 2195823354U;
unsigned int var_9 = 3473598175U;
unsigned int var_10 = 2876909635U;
unsigned int var_12 = 178760481U;
unsigned int var_18 = 3551296607U;
int zero = 0;
unsigned int var_20 = 4261053540U;
unsigned int var_21 = 896498705U;
unsigned int var_22 = 363946820U;
unsigned int var_23 = 2768259008U;
unsigned int var_24 = 3927835899U;
unsigned int var_25 = 3338954532U;
unsigned int var_26 = 1269874061U;
unsigned int arr_0 [22] ;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 752550241U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1106782700U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
