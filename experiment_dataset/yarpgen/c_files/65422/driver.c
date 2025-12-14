#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2081034280;
int var_7 = 872231139;
signed char var_10 = (signed char)-43;
unsigned char var_11 = (unsigned char)227;
int zero = 0;
int var_13 = -2063345769;
unsigned int var_14 = 3126104800U;
long long int var_15 = -2684685302888325765LL;
int var_16 = -62118640;
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
