#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8390464092502917419LL;
unsigned long long int var_4 = 492540767085189126ULL;
int var_8 = -61033346;
unsigned char var_9 = (unsigned char)69;
int zero = 0;
unsigned char var_10 = (unsigned char)58;
int var_11 = -618744122;
short var_12 = (short)5396;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)43;
unsigned int var_15 = 1810244772U;
unsigned int arr_0 [21] ;
unsigned short arr_1 [21] ;
_Bool arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 4113947984U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)25658;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
