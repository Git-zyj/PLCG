#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1588080469U;
long long int var_1 = -4061734053275088614LL;
signed char var_3 = (signed char)76;
unsigned int var_7 = 2537713U;
unsigned int var_8 = 864562522U;
unsigned short var_10 = (unsigned short)566;
unsigned short var_13 = (unsigned short)10274;
short var_14 = (short)-25604;
int zero = 0;
unsigned int var_15 = 3874971366U;
unsigned long long int var_16 = 18337814517798403794ULL;
signed char var_17 = (signed char)43;
signed char var_18 = (signed char)-68;
signed char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)118;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
