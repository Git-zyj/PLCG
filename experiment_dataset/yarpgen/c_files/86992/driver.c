#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18239899875654612611ULL;
unsigned char var_3 = (unsigned char)224;
unsigned int var_5 = 4226673170U;
unsigned int var_9 = 954405235U;
int var_12 = -1657737219;
unsigned int var_14 = 2785878320U;
long long int var_15 = -6135867768530242967LL;
signed char var_17 = (signed char)-123;
int zero = 0;
unsigned char var_18 = (unsigned char)122;
unsigned int var_19 = 2217469736U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
