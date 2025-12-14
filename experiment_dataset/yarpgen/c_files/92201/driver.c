#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2636854164U;
signed char var_1 = (signed char)59;
long long int var_2 = 5291805342966630792LL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1289889859U;
unsigned int var_7 = 213274096U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2544050124U;
signed char var_14 = (signed char)-51;
_Bool var_15 = (_Bool)0;
int var_16 = -1719862292;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
