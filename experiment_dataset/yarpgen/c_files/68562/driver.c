#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17345660700294147859ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9599742794331896516ULL;
signed char var_6 = (signed char)79;
short var_10 = (short)10578;
unsigned short var_11 = (unsigned short)64000;
int zero = 0;
int var_14 = 2074419107;
long long int var_15 = 802532518106971012LL;
signed char var_16 = (signed char)103;
int var_17 = 100071254;
short var_18 = (short)21223;
unsigned long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 15800175328161013413ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
