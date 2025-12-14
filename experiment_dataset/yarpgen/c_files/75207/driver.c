#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)208;
long long int var_2 = -4358419780290377090LL;
long long int var_8 = -9222256596053635132LL;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)189;
long long int var_12 = -541952263454313486LL;
short var_15 = (short)30276;
int zero = 0;
short var_17 = (short)-31894;
signed char var_18 = (signed char)3;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3633456569U;
signed char var_21 = (signed char)52;
unsigned int var_22 = 121772281U;
unsigned int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 3446850878U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
