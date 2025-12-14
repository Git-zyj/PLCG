#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49173;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)43515;
int zero = 0;
signed char var_11 = (signed char)34;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 12568151394878426932ULL;
unsigned short var_15 = (unsigned short)57741;
signed char var_16 = (signed char)-97;
signed char arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)7179;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
