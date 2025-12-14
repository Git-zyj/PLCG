#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1407295810481749700ULL;
unsigned long long int var_6 = 4353792234912797304ULL;
short var_8 = (short)-6014;
unsigned int var_10 = 3914760800U;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)37037;
signed char var_19 = (signed char)-48;
unsigned short var_20 = (unsigned short)23667;
int var_21 = -1565206788;
int arr_3 [15] ;
_Bool arr_5 [15] [15] ;
unsigned short arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 84302688;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)47135;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
