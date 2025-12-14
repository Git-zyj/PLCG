#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14072;
short var_1 = (short)28751;
unsigned int var_2 = 1274425145U;
unsigned short var_4 = (unsigned short)2339;
long long int var_6 = 4703462255573201744LL;
long long int var_7 = -5901302675573002948LL;
short var_9 = (short)30711;
int zero = 0;
unsigned int var_10 = 676964658U;
long long int var_11 = -3328967736870263297LL;
_Bool var_12 = (_Bool)0;
int var_13 = 39956541;
long long int var_14 = 6073772911538568504LL;
_Bool var_15 = (_Bool)1;
int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 477109883 : 1690657708;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
