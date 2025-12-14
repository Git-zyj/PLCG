#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8672942237835850334LL;
_Bool var_1 = (_Bool)1;
long long int var_9 = 296768979895543431LL;
unsigned int var_13 = 821090756U;
unsigned short var_15 = (unsigned short)27707;
long long int var_17 = -8689523601274955178LL;
int zero = 0;
short var_18 = (short)20811;
int var_19 = -314646481;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
int arr_0 [22] ;
_Bool arr_1 [22] ;
long long int arr_2 [22] ;
unsigned char arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1391690619;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -8194685555176912016LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)182;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
