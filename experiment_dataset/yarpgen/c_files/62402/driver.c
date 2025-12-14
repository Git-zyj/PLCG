#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2611171879209361688ULL;
unsigned char var_5 = (unsigned char)132;
unsigned short var_6 = (unsigned short)21990;
unsigned char var_9 = (unsigned char)53;
unsigned long long int var_15 = 10096038799210639752ULL;
unsigned int var_16 = 1209591972U;
int zero = 0;
unsigned char var_19 = (unsigned char)8;
short var_20 = (short)-20431;
long long int var_21 = -3891805168783884622LL;
unsigned int var_22 = 1526091041U;
unsigned char var_23 = (unsigned char)27;
unsigned short arr_0 [23] [23] ;
unsigned long long int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)25972;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 7912388193491345836ULL;
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
