#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2103120398U;
short var_3 = (short)30423;
unsigned short var_11 = (unsigned short)41146;
int var_12 = -629387967;
int zero = 0;
short var_13 = (short)7286;
short var_14 = (short)3232;
unsigned int var_15 = 1236859996U;
unsigned int var_16 = 634972093U;
short var_17 = (short)-227;
long long int var_18 = 3887180263542708093LL;
long long int var_19 = -3236362729223175839LL;
unsigned int arr_0 [25] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2551149922U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)1001;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
