#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -449175488;
short var_4 = (short)16958;
signed char var_7 = (signed char)117;
signed char var_9 = (signed char)36;
signed char var_12 = (signed char)-22;
unsigned char var_15 = (unsigned char)16;
unsigned char var_16 = (unsigned char)239;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-31;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-3070;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-68;
short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)29989;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
