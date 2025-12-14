#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-93;
signed char var_6 = (signed char)97;
int var_7 = -1104394779;
long long int var_9 = 2658714971003539196LL;
unsigned long long int var_10 = 17193168682194438317ULL;
unsigned int var_11 = 2187380294U;
int zero = 0;
int var_13 = 1758234351;
short var_14 = (short)3739;
unsigned char var_15 = (unsigned char)205;
long long int arr_0 [23] ;
int arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4874992472555323063LL : 1404947684127255474LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -2054429649;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
