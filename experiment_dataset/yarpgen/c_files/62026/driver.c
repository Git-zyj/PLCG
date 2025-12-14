#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6272074418591001969LL;
short var_3 = (short)30066;
int var_6 = -40999432;
unsigned long long int var_7 = 2415934036802712109ULL;
int var_9 = 1222124863;
unsigned short var_10 = (unsigned short)15230;
int zero = 0;
unsigned int var_11 = 1864103785U;
short var_12 = (short)6273;
unsigned long long int var_13 = 2287206947269499126ULL;
unsigned int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 2777732149U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
