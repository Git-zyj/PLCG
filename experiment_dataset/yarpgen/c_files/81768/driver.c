#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3113913804269987435LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3313736263U;
_Bool var_9 = (_Bool)1;
long long int var_13 = 7828530093044641859LL;
long long int var_14 = 5616818762635404004LL;
int zero = 0;
unsigned char var_17 = (unsigned char)236;
int var_18 = 1304723348;
short var_19 = (short)-10088;
unsigned int var_20 = 578530247U;
long long int var_21 = 8341044953662785968LL;
unsigned char var_22 = (unsigned char)27;
unsigned int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1573660818U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
