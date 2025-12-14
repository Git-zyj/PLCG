#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5177915658157120919LL;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 11032652005433347255ULL;
int zero = 0;
unsigned int var_12 = 758892477U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 82684728U;
unsigned int var_15 = 3598771068U;
signed char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)49;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
