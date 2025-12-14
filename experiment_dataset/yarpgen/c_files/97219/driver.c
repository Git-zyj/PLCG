#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25734;
unsigned short var_13 = (unsigned short)9295;
_Bool var_14 = (_Bool)1;
short var_15 = (short)13296;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)111;
short var_18 = (short)6537;
unsigned short var_19 = (unsigned short)34678;
short var_20 = (short)8186;
_Bool var_21 = (_Bool)0;
unsigned short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35831 : (unsigned short)34505;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
