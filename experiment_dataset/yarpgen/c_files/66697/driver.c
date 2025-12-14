#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_13 = (short)-10533;
unsigned long long int var_14 = 2757518818215020140ULL;
unsigned long long int var_16 = 4281958350785149835ULL;
int zero = 0;
signed char var_17 = (signed char)-122;
unsigned int var_18 = 4096782853U;
unsigned long long int var_19 = 12412199824894092770ULL;
short var_20 = (short)-18155;
_Bool arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
