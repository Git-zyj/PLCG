#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2994089934U;
unsigned int var_8 = 1210545634U;
long long int var_9 = -6422935425405557195LL;
short var_10 = (short)11439;
int zero = 0;
unsigned int var_12 = 2954423770U;
unsigned long long int var_13 = 2313002436866910355ULL;
long long int var_14 = -2906820362670890483LL;
unsigned long long int var_15 = 6762269550488524964ULL;
unsigned long long int var_16 = 10381846277916572915ULL;
short arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)6452;
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
