#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned int var_8 = 833019745U;
int zero = 0;
signed char var_11 = (signed char)42;
long long int var_12 = 6667501421806909767LL;
unsigned long long int var_13 = 3137495484568159638ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3313125758U;
unsigned long long int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 8418756872265302023ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
