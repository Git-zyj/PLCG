#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1168482333;
signed char var_1 = (signed char)37;
signed char var_2 = (signed char)64;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 15791655637037797500ULL;
signed char var_6 = (signed char)-56;
signed char var_7 = (signed char)-18;
unsigned short var_8 = (unsigned short)10885;
long long int var_9 = -5482040015842443043LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = -1940522325713585585LL;
int zero = 0;
short var_12 = (short)-586;
short var_13 = (short)-29336;
short var_14 = (short)-12202;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)33864;
signed char var_17 = (signed char)-4;
short arr_0 [23] [23] ;
_Bool arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)14633;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
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
