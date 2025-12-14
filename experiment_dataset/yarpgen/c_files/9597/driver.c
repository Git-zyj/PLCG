#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 14771432542343676898ULL;
unsigned int var_15 = 2716548121U;
unsigned char var_16 = (unsigned char)18;
int zero = 0;
unsigned char var_18 = (unsigned char)229;
unsigned long long int var_19 = 13031185952625935472ULL;
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
