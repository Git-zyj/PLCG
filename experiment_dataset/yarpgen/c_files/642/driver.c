#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3328564280762168744LL;
long long int var_1 = -6828138999188496427LL;
long long int var_2 = -8916042758523176163LL;
int var_3 = 1305245829;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)11130;
short var_7 = (short)27773;
int var_8 = -2076437934;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -776951357;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7201863561728126476LL;
int var_14 = 640007823;
unsigned short arr_0 [15] [15] ;
unsigned short arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)751;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)27235;
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
