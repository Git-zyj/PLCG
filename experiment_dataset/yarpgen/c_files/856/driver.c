#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4017855838U;
long long int var_1 = -2322063363998844254LL;
signed char var_5 = (signed char)88;
long long int var_8 = -2683085646877989193LL;
int zero = 0;
unsigned int var_10 = 3007729928U;
short var_11 = (short)10950;
long long int var_12 = -5478343109247013438LL;
signed char var_13 = (signed char)-110;
long long int var_14 = -5126331733272402224LL;
unsigned char var_15 = (unsigned char)251;
int var_16 = 1204046844;
unsigned short var_17 = (unsigned short)18442;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 8601857821822646773ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
