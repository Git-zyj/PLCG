#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7055031464789313482ULL;
long long int var_6 = -3721859906957620609LL;
long long int var_8 = -7060311128296681656LL;
unsigned short var_10 = (unsigned short)1709;
int zero = 0;
signed char var_13 = (signed char)-60;
unsigned int var_14 = 3190827801U;
unsigned int var_15 = 2197654637U;
unsigned short arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65275 : (unsigned short)25747;
}

void checksum() {
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
