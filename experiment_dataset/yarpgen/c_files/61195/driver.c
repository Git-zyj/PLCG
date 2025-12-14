#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 2786388679280969983LL;
unsigned short var_4 = (unsigned short)10314;
unsigned int var_6 = 3156027495U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 13297223719993708924ULL;
short var_11 = (short)-13934;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = 124038150301080946LL;
unsigned long long int var_16 = 6371494606188479469ULL;
long long int var_17 = -78414893019138526LL;
unsigned char arr_0 [19] ;
long long int arr_1 [19] [19] ;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 5611857100657714120LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 808170171826204426LL : -1567659742619201282LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
