#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2978470317U;
int var_3 = -1663590310;
unsigned long long int var_4 = 11537703892558314867ULL;
unsigned int var_7 = 1233917843U;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5736050309020192193LL;
int var_13 = 279816530;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)9315;
unsigned char var_17 = (unsigned char)139;
unsigned short var_18 = (unsigned short)42873;
signed char var_19 = (signed char)55;
long long int var_20 = -5634634372324131797LL;
int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 84605064;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
