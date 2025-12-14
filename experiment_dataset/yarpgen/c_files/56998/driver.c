#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17075859143652959094ULL;
short var_6 = (short)20714;
unsigned int var_7 = 3679528259U;
int zero = 0;
unsigned long long int var_12 = 4523851424097138979ULL;
short var_13 = (short)-18945;
signed char var_14 = (signed char)-41;
_Bool var_15 = (_Bool)1;
signed char arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-113;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
