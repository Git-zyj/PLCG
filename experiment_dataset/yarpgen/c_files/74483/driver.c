#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5001897495704405426LL;
short var_2 = (short)-1241;
unsigned int var_4 = 3013591047U;
short var_9 = (short)8772;
int zero = 0;
signed char var_10 = (signed char)6;
unsigned long long int var_11 = 7575889757373890449ULL;
unsigned short var_12 = (unsigned short)51360;
unsigned short var_13 = (unsigned short)1590;
unsigned int var_14 = 1773176159U;
_Bool arr_0 [24] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3128726122432013869LL : 7512403044106570011LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
