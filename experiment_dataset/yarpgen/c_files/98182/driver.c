#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2663;
_Bool var_2 = (_Bool)1;
short var_3 = (short)28326;
unsigned char var_6 = (unsigned char)70;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)-95;
signed char var_13 = (signed char)20;
unsigned int var_14 = 1951678460U;
int zero = 0;
long long int var_15 = 856183667320136571LL;
int var_16 = -1938507958;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)28;
signed char var_19 = (signed char)-38;
unsigned int arr_6 [24] [24] ;
unsigned int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 3110145908U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1723163186U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
