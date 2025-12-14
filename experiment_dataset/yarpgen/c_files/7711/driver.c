#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3904216204U;
unsigned int var_3 = 3061243283U;
unsigned int var_5 = 1460835705U;
unsigned int var_6 = 3434006557U;
unsigned int var_9 = 3940473572U;
unsigned int var_11 = 2874331446U;
unsigned int var_14 = 2585658008U;
unsigned int var_15 = 2718662131U;
int zero = 0;
unsigned int var_16 = 2937698663U;
unsigned int var_17 = 2578770380U;
unsigned int var_18 = 1447383613U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
