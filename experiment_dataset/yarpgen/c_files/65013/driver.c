#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59240;
unsigned long long int var_1 = 7049496290885663807ULL;
int var_3 = 2011178472;
unsigned short var_4 = (unsigned short)36394;
short var_5 = (short)32639;
unsigned char var_7 = (unsigned char)160;
long long int var_12 = -6713157317032258613LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = 5223175474192118451LL;
signed char var_15 = (signed char)-61;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int var_20 = -799247485;
int var_21 = -647382554;
long long int var_22 = -2995462824798514840LL;
unsigned long long int arr_1 [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 10079207177656003819ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-5408;
}

void checksum() {
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
