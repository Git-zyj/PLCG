#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3703457929514997967LL;
unsigned short var_8 = (unsigned short)14989;
unsigned short var_17 = (unsigned short)30228;
unsigned int var_18 = 679265751U;
int zero = 0;
signed char var_19 = (signed char)-95;
long long int var_20 = 1670859617923306750LL;
unsigned short var_21 = (unsigned short)26821;
int var_22 = 782474453;
signed char var_23 = (signed char)-68;
signed char var_24 = (signed char)89;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
unsigned short arr_0 [24] [24] ;
int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)9875;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -124989233;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
