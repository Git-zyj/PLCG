#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
long long int var_10 = 4713788829806494425LL;
unsigned char var_11 = (unsigned char)245;
unsigned char var_12 = (unsigned char)189;
unsigned int var_17 = 2518873385U;
int var_19 = -1122357278;
int zero = 0;
int var_20 = 505854447;
signed char var_21 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
