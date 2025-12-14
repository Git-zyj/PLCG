#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
int var_2 = -1079200058;
signed char var_4 = (signed char)74;
long long int var_5 = -2754785565993433837LL;
unsigned int var_6 = 3295469070U;
signed char var_7 = (signed char)-64;
long long int var_8 = 1106350751432537970LL;
unsigned long long int var_9 = 9271112390361586182ULL;
_Bool var_10 = (_Bool)0;
long long int var_12 = -4173847734674980462LL;
short var_13 = (short)2342;
unsigned int var_14 = 1858507241U;
signed char var_15 = (signed char)87;
int zero = 0;
unsigned int var_18 = 2220618889U;
long long int var_19 = -536788238201463614LL;
short var_20 = (short)31537;
signed char var_21 = (signed char)86;
signed char var_22 = (signed char)62;
long long int var_23 = 6276949029888842757LL;
unsigned int arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2173025362U;
}

void checksum() {
    hash(&seed, var_18);
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
