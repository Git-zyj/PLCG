#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28075;
unsigned short var_4 = (unsigned short)19052;
long long int var_9 = -5658343149762444017LL;
signed char var_11 = (signed char)13;
short var_12 = (short)-26551;
unsigned short var_14 = (unsigned short)35603;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2889614251U;
unsigned short var_17 = (unsigned short)61150;
int zero = 0;
short var_18 = (short)23786;
signed char var_19 = (signed char)-51;
signed char var_20 = (signed char)31;
long long int arr_0 [24] [24] ;
signed char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 6878914204380393384LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
