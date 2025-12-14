#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2396323078562271510LL;
long long int var_2 = -8695011472638576871LL;
unsigned short var_3 = (unsigned short)54190;
signed char var_4 = (signed char)-14;
long long int var_10 = 2520115018169970379LL;
int zero = 0;
long long int var_12 = -6928255051562139038LL;
signed char var_13 = (signed char)-118;
unsigned short var_14 = (unsigned short)35124;
unsigned short var_15 = (unsigned short)32330;
unsigned int var_16 = 1741111943U;
unsigned char arr_0 [18] [18] ;
short arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-6787;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)46367;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
