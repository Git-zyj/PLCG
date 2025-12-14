#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
int var_2 = -6217532;
signed char var_6 = (signed char)58;
int var_10 = 1871515754;
int zero = 0;
unsigned int var_12 = 1116170220U;
short var_13 = (short)20971;
unsigned short var_14 = (unsigned short)58625;
unsigned long long int var_15 = 15642135600776162ULL;
long long int var_16 = -4738860620037104452LL;
short var_17 = (short)-24286;
unsigned short arr_1 [12] ;
signed char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)2101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-73;
}

void checksum() {
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
