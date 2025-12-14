#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 809648914U;
long long int var_7 = -3293568433213128086LL;
unsigned int var_12 = 3802502798U;
unsigned short var_13 = (unsigned short)48516;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)8342;
int var_17 = -2018476145;
int var_18 = 1018371335;
short var_19 = (short)-9585;
unsigned short var_20 = (unsigned short)4106;
short var_21 = (short)-12373;
unsigned char var_22 = (unsigned char)191;
unsigned int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1288134594U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
