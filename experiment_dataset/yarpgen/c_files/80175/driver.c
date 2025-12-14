#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 702044175U;
_Bool var_7 = (_Bool)0;
int var_8 = 1548838918;
int var_12 = 427495414;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-75;
signed char var_16 = (signed char)-90;
unsigned short var_17 = (unsigned short)61564;
signed char var_18 = (signed char)-61;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1949605562U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
