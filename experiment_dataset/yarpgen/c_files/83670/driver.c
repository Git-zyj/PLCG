#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-106;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 3976047359U;
int zero = 0;
short var_15 = (short)-5485;
unsigned char var_16 = (unsigned char)116;
short var_17 = (short)-14091;
unsigned long long int var_18 = 1708027257946643816ULL;
unsigned long long int var_19 = 4717808133007050280ULL;
signed char var_20 = (signed char)54;
signed char arr_1 [11] ;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3674553269U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
