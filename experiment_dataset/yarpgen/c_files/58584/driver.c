#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -48203941;
unsigned char var_4 = (unsigned char)154;
unsigned char var_9 = (unsigned char)58;
short var_10 = (short)-3656;
int zero = 0;
unsigned int var_12 = 808966442U;
unsigned int var_13 = 4081106902U;
unsigned char var_14 = (unsigned char)185;
int var_15 = 1087179052;
unsigned short arr_0 [11] ;
unsigned long long int arr_2 [11] ;
int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)55764;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1698090925108043563ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 773468841;
}

void checksum() {
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
