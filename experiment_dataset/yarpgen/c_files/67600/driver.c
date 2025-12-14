#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
unsigned char var_7 = (unsigned char)97;
unsigned long long int var_8 = 18252909989512917761ULL;
unsigned int var_9 = 1851666736U;
unsigned int var_12 = 843847425U;
int zero = 0;
unsigned long long int var_15 = 8378135607576877750ULL;
unsigned char var_16 = (unsigned char)80;
void init() {
}

void checksum() {
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
