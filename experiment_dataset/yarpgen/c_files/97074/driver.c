#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 983752014U;
short var_3 = (short)-26953;
int var_4 = 2055252727;
signed char var_5 = (signed char)96;
unsigned long long int var_6 = 9046335879492828239ULL;
unsigned int var_7 = 1300322965U;
unsigned short var_9 = (unsigned short)37250;
unsigned short var_13 = (unsigned short)34527;
int zero = 0;
unsigned short var_14 = (unsigned short)41833;
unsigned int var_15 = 280414176U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5559063633615703573ULL;
unsigned int arr_0 [24] ;
short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3754336116U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-16690;
}

void checksum() {
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
