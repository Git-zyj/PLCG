#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4223315807U;
unsigned int var_2 = 2883865367U;
int var_3 = -867992204;
unsigned char var_4 = (unsigned char)18;
signed char var_9 = (signed char)-19;
int zero = 0;
unsigned int var_11 = 3364042631U;
long long int var_12 = 7942828709858989523LL;
long long int var_13 = -1383706124010554609LL;
int var_14 = -1167381471;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
