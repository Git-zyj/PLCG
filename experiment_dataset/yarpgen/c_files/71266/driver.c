#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_9 = 4247519491581334508ULL;
short var_11 = (short)-18062;
unsigned long long int var_12 = 8800486228879437114ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-95;
unsigned long long int var_15 = 13175243102340361861ULL;
unsigned int var_16 = 3260299541U;
unsigned long long int var_17 = 17504556171571490591ULL;
unsigned long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 10549127127371390553ULL;
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
