#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 6408296908348649039ULL;
int var_2 = 151820347;
short var_3 = (short)23592;
long long int var_5 = 2270897256218699644LL;
short var_6 = (short)-5365;
int var_8 = 2074471431;
short var_10 = (short)-17271;
int zero = 0;
unsigned char var_11 = (unsigned char)105;
long long int var_12 = -3016440885118040025LL;
short var_13 = (short)5163;
long long int var_14 = 6849351675344333524LL;
unsigned int var_15 = 1028737161U;
long long int var_16 = 7298288046389426029LL;
int arr_0 [15] ;
unsigned int arr_1 [15] ;
long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1221724764;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 479488478U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 3226939596962763802LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
