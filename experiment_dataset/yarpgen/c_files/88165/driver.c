#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16782181888861833368ULL;
short var_2 = (short)-13107;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_7 = 5625098614268160066LL;
int zero = 0;
short var_10 = (short)30641;
short var_11 = (short)14089;
short var_12 = (short)26160;
unsigned long long int var_13 = 18286520571945968107ULL;
signed char var_14 = (signed char)41;
int arr_0 [14] [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -1811786168;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 9678133642490769783ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
