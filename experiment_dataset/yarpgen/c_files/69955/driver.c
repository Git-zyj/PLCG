#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6872601772709510952LL;
unsigned int var_4 = 973374058U;
unsigned int var_11 = 3714003937U;
int var_12 = -1672051746;
int var_13 = -1207000709;
int zero = 0;
unsigned long long int var_16 = 10654260410212183031ULL;
unsigned char var_17 = (unsigned char)90;
signed char var_18 = (signed char)-23;
unsigned char var_19 = (unsigned char)99;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 9892561221489249684ULL : 5986019842213583939ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
