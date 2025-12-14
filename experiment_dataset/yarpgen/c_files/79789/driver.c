#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8647942383478953067LL;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)190;
int var_4 = 1029253236;
_Bool var_5 = (_Bool)0;
long long int var_6 = 1630607305678700784LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -258158308404370159LL;
int var_11 = 822847839;
int var_13 = 1074792170;
int zero = 0;
short var_14 = (short)-2297;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)79;
short var_17 = (short)313;
short var_18 = (short)-18227;
unsigned char var_19 = (unsigned char)130;
int arr_0 [20] [20] ;
short arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -66965543;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)599;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
