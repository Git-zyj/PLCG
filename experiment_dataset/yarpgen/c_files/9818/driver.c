#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62512;
int var_1 = -969192315;
long long int var_6 = -7351531586443084787LL;
unsigned short var_14 = (unsigned short)15070;
short var_17 = (short)-14328;
int zero = 0;
unsigned int var_18 = 2129071852U;
short var_19 = (short)-31198;
signed char var_20 = (signed char)-105;
unsigned long long int var_21 = 2659399914852017107ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)76;
unsigned int var_24 = 4079668594U;
long long int arr_2 [23] [23] ;
long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 834430182704102239LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -3457744921776618786LL : 5105165948594425545LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
