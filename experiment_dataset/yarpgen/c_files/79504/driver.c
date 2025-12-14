#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -656670355;
short var_3 = (short)433;
short var_8 = (short)274;
unsigned long long int var_12 = 13429473117915690500ULL;
short var_14 = (short)-25623;
int zero = 0;
unsigned int var_19 = 2554679177U;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3399730256036070433LL;
unsigned int var_22 = 3990732686U;
unsigned int arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2652568747U;
}

void checksum() {
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
