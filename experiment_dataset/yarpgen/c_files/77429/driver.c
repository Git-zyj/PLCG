#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)5911;
signed char var_7 = (signed char)-93;
short var_11 = (short)-4076;
long long int var_13 = 7186008053569132307LL;
long long int var_14 = 1229238460875824915LL;
int zero = 0;
unsigned long long int var_15 = 9708868901141522089ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-31;
unsigned short var_18 = (unsigned short)26419;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)64319;
long long int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -2899558746075894691LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
