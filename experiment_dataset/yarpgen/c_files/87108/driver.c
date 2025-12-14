#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7586619773927076590LL;
_Bool var_8 = (_Bool)0;
int var_9 = 1552739079;
int zero = 0;
signed char var_10 = (signed char)112;
unsigned int var_11 = 1200084881U;
long long int var_12 = 2325276047266379478LL;
signed char var_13 = (signed char)86;
_Bool var_14 = (_Bool)1;
unsigned long long int arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 14811461963798053037ULL : 13850342722567491664ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)21485 : (unsigned short)23796;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
