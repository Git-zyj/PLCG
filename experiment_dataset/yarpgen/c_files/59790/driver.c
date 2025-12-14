#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16651535454370755337ULL;
long long int var_3 = 3316684827268289220LL;
short var_4 = (short)24574;
unsigned short var_8 = (unsigned short)26822;
long long int var_9 = -4740896848768579426LL;
int zero = 0;
short var_11 = (short)-27625;
short var_12 = (short)-4004;
short var_13 = (short)-26234;
short var_14 = (short)6217;
short var_15 = (short)-16546;
unsigned int var_16 = 1595142476U;
short var_17 = (short)-18611;
int arr_0 [14] ;
int arr_2 [14] ;
int arr_4 [10] ;
short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 781193260;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -1277984739;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 148926140;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)-31888;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
