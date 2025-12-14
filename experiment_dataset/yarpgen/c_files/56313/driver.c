#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1692615480U;
int var_6 = 1850759737;
unsigned long long int var_7 = 2261146402741965253ULL;
unsigned char var_8 = (unsigned char)177;
long long int var_10 = -8781909214454837150LL;
int var_11 = -566799685;
unsigned long long int var_12 = 5241081409191257829ULL;
int zero = 0;
unsigned long long int var_16 = 13075852309978571278ULL;
_Bool var_17 = (_Bool)1;
int var_18 = -191877099;
long long int var_19 = -161929107849194153LL;
short arr_0 [19] [19] ;
signed char arr_1 [19] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-6586;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1682823722633335246ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
