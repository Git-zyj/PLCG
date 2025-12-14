#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned long long int var_6 = 5457169072583737933ULL;
int zero = 0;
unsigned long long int var_12 = 237797406169787776ULL;
unsigned int var_13 = 4289344098U;
unsigned long long int var_14 = 5987939364122604602ULL;
unsigned long long int var_15 = 13408746558928087456ULL;
unsigned long long int var_16 = 13241278892557686679ULL;
signed char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-23;
}

void checksum() {
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
