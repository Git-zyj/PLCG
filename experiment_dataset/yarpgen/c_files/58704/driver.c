#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5347937369602057399ULL;
int var_6 = 933585174;
int zero = 0;
unsigned int var_13 = 2870337266U;
unsigned long long int var_14 = 9005265001740711082ULL;
unsigned int var_15 = 2453449068U;
unsigned long long int var_16 = 11143870472660283138ULL;
long long int var_17 = 7789610851074902256LL;
unsigned short arr_0 [19] ;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)33463;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2087835186287024669LL : -5437238644528718920LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
