#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1859454063U;
unsigned long long int var_9 = 1325810539209226376ULL;
unsigned char var_11 = (unsigned char)254;
unsigned char var_13 = (unsigned char)114;
int zero = 0;
unsigned long long int var_17 = 7883147132326767220ULL;
unsigned int var_18 = 2165229988U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
