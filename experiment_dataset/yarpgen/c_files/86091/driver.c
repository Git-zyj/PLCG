#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60596;
unsigned short var_2 = (unsigned short)61604;
long long int var_4 = -4492517701697827371LL;
long long int var_6 = -2218363332149766087LL;
long long int var_7 = 426198764968396076LL;
signed char var_8 = (signed char)-74;
long long int var_9 = -7858449819651274390LL;
int zero = 0;
unsigned short var_11 = (unsigned short)64497;
unsigned long long int var_12 = 4093953474797099818ULL;
signed char var_13 = (signed char)-33;
signed char var_14 = (signed char)-115;
_Bool var_15 = (_Bool)0;
unsigned short arr_2 [15] [15] [15] ;
unsigned char arr_3 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)4192;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)190;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
