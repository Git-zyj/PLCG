#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -748744882;
int var_1 = -1236488720;
unsigned int var_4 = 3040254541U;
signed char var_5 = (signed char)-15;
int var_6 = -1498895724;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)58038;
int zero = 0;
signed char var_10 = (signed char)104;
long long int var_11 = 2803552949348014645LL;
unsigned int var_12 = 1983278600U;
long long int var_13 = 9027004279552854569LL;
unsigned int var_14 = 804458064U;
long long int var_15 = 2230963631577831908LL;
unsigned short var_16 = (unsigned short)21049;
_Bool arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
