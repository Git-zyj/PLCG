#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44372;
unsigned int var_3 = 4255227890U;
unsigned short var_5 = (unsigned short)35961;
short var_6 = (short)19443;
long long int var_7 = -7116119127211979285LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_15 = -1032595997;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-18991;
int zero = 0;
unsigned char var_19 = (unsigned char)22;
unsigned int var_20 = 1243708620U;
long long int var_21 = -5495735527226252686LL;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_4 [19] [19] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 10605104708292889029ULL : 18101535610768983677ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)69 : (unsigned char)150;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
