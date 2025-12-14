#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4034910248U;
signed char var_2 = (signed char)-99;
unsigned int var_4 = 3746026533U;
int var_5 = 678680372;
unsigned char var_6 = (unsigned char)66;
unsigned short var_7 = (unsigned short)22489;
short var_8 = (short)-11717;
unsigned int var_10 = 387455333U;
int var_11 = 353960163;
int zero = 0;
unsigned short var_12 = (unsigned short)7288;
long long int var_13 = -7226276683294478215LL;
unsigned long long int var_14 = 12622490662321238688ULL;
unsigned int var_15 = 3383246000U;
long long int var_16 = 4272926863507547655LL;
unsigned int var_17 = 3057487227U;
short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-16506;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
