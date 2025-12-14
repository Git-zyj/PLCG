#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1779514638662211765LL;
long long int var_1 = 4894758225153909283LL;
int var_3 = -565303890;
unsigned int var_5 = 1068654210U;
short var_6 = (short)-282;
unsigned short var_7 = (unsigned short)51925;
int zero = 0;
signed char var_10 = (signed char)-48;
unsigned int var_11 = 2553464125U;
short var_12 = (short)-3194;
long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -6824706631100884167LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
