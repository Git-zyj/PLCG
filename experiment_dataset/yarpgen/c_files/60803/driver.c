#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33214;
short var_5 = (short)29717;
long long int var_6 = 7009746595170378535LL;
unsigned long long int var_8 = 9221485821332935787ULL;
int var_9 = 1398487782;
unsigned char var_16 = (unsigned char)86;
int var_17 = -832380144;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-48;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)63160;
long long int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 8433348907390260952LL : 516665349029502488LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
