#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_7 = 2184874721U;
short var_9 = (short)26583;
int zero = 0;
int var_12 = 1473485560;
int var_13 = -1803428940;
unsigned char var_14 = (unsigned char)221;
unsigned long long int var_15 = 10215080741611602426ULL;
unsigned short var_16 = (unsigned short)59229;
long long int var_17 = -747112132038061825LL;
long long int arr_0 [13] ;
long long int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4676985391254160770LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -3329585130349517553LL;
}

void checksum() {
    hash(&seed, var_12);
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
