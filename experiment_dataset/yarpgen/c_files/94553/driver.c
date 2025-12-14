#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2323052040U;
signed char var_3 = (signed char)-110;
int var_5 = -89721247;
int var_10 = -1507371145;
signed char var_11 = (signed char)-127;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13641947737415515571ULL;
void init() {
}

void checksum() {
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
