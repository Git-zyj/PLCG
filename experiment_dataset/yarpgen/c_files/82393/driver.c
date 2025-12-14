#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14419756890526605799ULL;
signed char var_12 = (signed char)-21;
signed char var_14 = (signed char)-19;
unsigned long long int var_15 = 2037795488896813734ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14484456930724517443ULL;
unsigned int var_22 = 89776401U;
unsigned int var_23 = 3212581310U;
unsigned int var_24 = 1024719948U;
_Bool var_25 = (_Bool)1;
_Bool arr_0 [25] [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)83;
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
