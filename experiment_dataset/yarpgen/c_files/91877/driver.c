#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30454;
signed char var_2 = (signed char)-112;
long long int var_6 = 3646613145843778215LL;
short var_10 = (short)24269;
int zero = 0;
unsigned int var_11 = 2496982994U;
unsigned long long int var_12 = 5291269919030955171ULL;
signed char var_13 = (signed char)-53;
unsigned long long int var_14 = 6769649622940930809ULL;
unsigned long long int var_15 = 10752819941533434726ULL;
unsigned long long int arr_0 [19] ;
int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 5020274044067406347ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1119983703;
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
