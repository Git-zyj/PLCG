#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)97;
int var_6 = -1532358041;
int var_12 = 1563052561;
short var_13 = (short)-21284;
signed char var_17 = (signed char)-55;
int zero = 0;
long long int var_19 = 1275747771472509878LL;
unsigned int var_20 = 2301444638U;
signed char var_21 = (signed char)-85;
signed char var_22 = (signed char)-24;
long long int var_23 = -710503787865492831LL;
long long int arr_2 [23] ;
signed char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -2110125143038546712LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)118;
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
