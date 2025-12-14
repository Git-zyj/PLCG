#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)18;
signed char var_8 = (signed char)-99;
signed char var_9 = (signed char)41;
unsigned int var_10 = 3215986268U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1841748257U;
unsigned int var_19 = 3058761878U;
unsigned int var_20 = 1033129348U;
long long int var_21 = -13462465510604098LL;
unsigned short var_22 = (unsigned short)82;
short arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-14377;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
