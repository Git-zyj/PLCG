#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11634;
unsigned short var_5 = (unsigned short)62526;
long long int var_7 = 8277816422007676063LL;
signed char var_9 = (signed char)-63;
unsigned long long int var_14 = 573495464927871609ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)34;
unsigned long long int var_18 = 12582051876332783418ULL;
signed char var_19 = (signed char)53;
unsigned short var_20 = (unsigned short)22676;
short arr_2 [20] ;
unsigned char arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)8864;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)22;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
