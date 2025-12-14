#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19805;
unsigned short var_3 = (unsigned short)31913;
int var_4 = -1700796561;
unsigned char var_10 = (unsigned char)75;
unsigned short var_13 = (unsigned short)9093;
unsigned long long int var_14 = 18200914813528180887ULL;
unsigned char var_16 = (unsigned char)218;
int zero = 0;
unsigned short var_18 = (unsigned short)58813;
signed char var_19 = (signed char)110;
unsigned int var_20 = 2104026429U;
unsigned int var_21 = 3846951959U;
unsigned long long int arr_0 [15] [15] ;
long long int arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 14193934988439170582ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -8297514454912836356LL;
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
