#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24121;
long long int var_5 = 4195820273990446947LL;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)40;
unsigned int var_12 = 1174883651U;
int var_13 = 1005792614;
unsigned int var_14 = 558304654U;
unsigned long long int var_18 = 7449249835031808721ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)72;
unsigned long long int var_20 = 3629548830424747257ULL;
unsigned int var_21 = 2287931191U;
int var_22 = -60006355;
signed char var_23 = (signed char)12;
int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -1662220262;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
