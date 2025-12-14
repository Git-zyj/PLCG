#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7459;
_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)29634;
int var_6 = 1109258863;
signed char var_11 = (signed char)112;
short var_14 = (short)-22566;
int zero = 0;
signed char var_16 = (signed char)9;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)105;
unsigned long long int var_19 = 1542021748760077818ULL;
short var_20 = (short)31815;
long long int var_21 = 6810976798573630269LL;
long long int var_22 = -8917999173545567448LL;
unsigned short arr_0 [24] ;
long long int arr_1 [24] [24] ;
long long int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)4727;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 6545099462475836449LL : -1356063411376081986LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 5164587648102070031LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
