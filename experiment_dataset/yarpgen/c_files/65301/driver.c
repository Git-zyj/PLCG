#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3208691025U;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)1;
unsigned char var_7 = (unsigned char)73;
long long int var_9 = -3561193936292108504LL;
_Bool var_11 = (_Bool)1;
short var_14 = (short)25704;
int zero = 0;
signed char var_16 = (signed char)-29;
unsigned int var_17 = 3303571292U;
long long int var_18 = -4622362194406717968LL;
unsigned char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)36;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
