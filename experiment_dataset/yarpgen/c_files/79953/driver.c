#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
short var_1 = (short)22244;
unsigned short var_3 = (unsigned short)60519;
signed char var_6 = (signed char)125;
unsigned long long int var_7 = 16550235509112482655ULL;
signed char var_9 = (signed char)57;
unsigned long long int var_11 = 9992884633972243463ULL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)37358;
_Bool var_14 = (_Bool)0;
long long int var_16 = -2027508595266008432LL;
unsigned char var_18 = (unsigned char)31;
int zero = 0;
short var_19 = (short)22873;
unsigned long long int var_20 = 3563576111905183053ULL;
unsigned short var_21 = (unsigned short)33100;
short var_22 = (short)24523;
int var_23 = -285122034;
unsigned long long int var_24 = 17050007583872689511ULL;
long long int arr_3 [20] ;
unsigned short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -509618442944891719LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)16745;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
