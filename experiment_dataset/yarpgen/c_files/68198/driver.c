#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1693160918U;
unsigned short var_2 = (unsigned short)34095;
unsigned int var_5 = 1247972556U;
unsigned int var_8 = 1199704992U;
long long int var_10 = -2498725435026157756LL;
int zero = 0;
long long int var_15 = -1621419370995177222LL;
unsigned int var_16 = 3680494194U;
short var_17 = (short)-22498;
short var_18 = (short)32410;
short var_19 = (short)10593;
unsigned int var_20 = 1699694412U;
unsigned short var_21 = (unsigned short)57848;
signed char arr_0 [17] [17] ;
long long int arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -5821626972753395173LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
