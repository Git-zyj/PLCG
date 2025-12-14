#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6043403994528184862LL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-32489;
long long int var_15 = -5534019722579824284LL;
short var_16 = (short)-8726;
signed char var_17 = (signed char)-58;
signed char var_18 = (signed char)24;
signed char arr_0 [22] ;
long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -6136066914743446308LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
