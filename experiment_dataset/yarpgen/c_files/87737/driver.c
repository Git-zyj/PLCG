#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4838046153301248784LL;
unsigned int var_6 = 4256071893U;
unsigned int var_7 = 2707867750U;
unsigned short var_14 = (unsigned short)4959;
int zero = 0;
long long int var_15 = -251176847818515148LL;
int var_16 = -255999119;
int var_17 = -1790452957;
signed char var_18 = (signed char)112;
_Bool var_19 = (_Bool)1;
int var_20 = 857943403;
long long int var_21 = -7935284207982316934LL;
int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 400204588;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
