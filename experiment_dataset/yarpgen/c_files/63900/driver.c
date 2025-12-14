#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24918;
unsigned int var_3 = 2689269498U;
signed char var_4 = (signed char)(-127 - 1);
int var_10 = -292784762;
unsigned long long int var_12 = 13293318513394577571ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7570371806563165706LL;
short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-15996;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
