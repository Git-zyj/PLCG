#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 706403557;
unsigned short var_4 = (unsigned short)10503;
short var_9 = (short)-4607;
unsigned short var_12 = (unsigned short)5610;
int zero = 0;
long long int var_19 = -2898338453190138771LL;
signed char var_20 = (signed char)8;
unsigned int var_21 = 1721961383U;
short var_22 = (short)-15425;
long long int var_23 = -3949912927912976287LL;
short arr_0 [16] [16] ;
unsigned int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-25792;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3885382651U;
}

void checksum() {
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
