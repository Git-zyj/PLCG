#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 169631822U;
signed char var_1 = (signed char)79;
unsigned char var_2 = (unsigned char)58;
short var_9 = (short)-31980;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 17284783717205169850ULL;
unsigned long long int var_14 = 17299292479384139705ULL;
unsigned char var_15 = (unsigned char)131;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)41;
_Bool var_18 = (_Bool)0;
signed char arr_1 [10] ;
unsigned char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)25;
}

void checksum() {
    hash(&seed, var_13);
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
