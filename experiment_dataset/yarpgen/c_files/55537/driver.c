#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -844346212;
unsigned long long int var_1 = 16182664474667818306ULL;
unsigned char var_4 = (unsigned char)112;
signed char var_11 = (signed char)-115;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 9179278905635224981LL;
short var_16 = (short)1211;
unsigned int var_17 = 2414681133U;
int var_18 = -237156127;
unsigned int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1442296089U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 18177801852536694006ULL : 16074095280458235686ULL;
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
