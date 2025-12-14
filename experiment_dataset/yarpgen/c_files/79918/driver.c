#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)43;
unsigned char var_2 = (unsigned char)93;
unsigned long long int var_3 = 13851825664578806675ULL;
unsigned int var_4 = 2377227040U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 3572452974273819304ULL;
unsigned int var_7 = 1818394220U;
long long int var_8 = 2204133136300113178LL;
unsigned short var_9 = (unsigned short)37915;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 8078767366025478068LL;
long long int var_12 = -961580209663957681LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)5490;
long long int var_15 = -883393813789246385LL;
int arr_0 [19] [19] ;
_Bool arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -967539404;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
