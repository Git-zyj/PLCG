#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7401610506161731753ULL;
long long int var_2 = 7016897632542679532LL;
unsigned short var_3 = (unsigned short)14350;
unsigned char var_4 = (unsigned char)123;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6189378429962812484LL;
unsigned long long int var_9 = 8067404460210614478ULL;
unsigned char var_13 = (unsigned char)89;
int zero = 0;
unsigned char var_16 = (unsigned char)28;
unsigned int var_17 = 2811395923U;
short var_18 = (short)19124;
long long int var_19 = -2501149653293197912LL;
unsigned char arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)203;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
