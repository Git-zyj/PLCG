#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 11782372081621808220ULL;
unsigned int var_6 = 2913491036U;
short var_8 = (short)-13701;
int var_9 = 526289850;
int zero = 0;
long long int var_10 = 620623101809636519LL;
_Bool var_11 = (_Bool)1;
int var_12 = -1264241696;
unsigned long long int var_13 = 16576693228143755627ULL;
long long int arr_2 [16] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -8210221104929143071LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1631165792;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
