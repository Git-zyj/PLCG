#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 852167333U;
unsigned short var_5 = (unsigned short)15802;
signed char var_7 = (signed char)-119;
int zero = 0;
unsigned long long int var_10 = 10397575341964188497ULL;
int var_11 = 355432598;
signed char var_12 = (signed char)-9;
int var_13 = 665044279;
int arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -860654148;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
