#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35860;
unsigned int var_2 = 3540936946U;
signed char var_3 = (signed char)-13;
unsigned short var_5 = (unsigned short)62055;
int var_6 = -272261687;
long long int var_8 = 2963624786924633118LL;
short var_10 = (short)29396;
long long int var_11 = -6291066722991162981LL;
int zero = 0;
int var_14 = 548410354;
int var_15 = 637029057;
unsigned char var_16 = (unsigned char)148;
unsigned short var_17 = (unsigned short)24946;
int var_18 = 696607969;
long long int var_19 = -6839403766058421897LL;
long long int var_20 = -669911535824044636LL;
unsigned short arr_1 [25] [25] ;
signed char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)52809;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)116 : (signed char)49;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
