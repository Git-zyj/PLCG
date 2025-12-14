#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 677038303;
unsigned long long int var_8 = 4094998479875718951ULL;
unsigned long long int var_11 = 16284118320913272192ULL;
unsigned short var_12 = (unsigned short)19674;
long long int var_16 = -2890077350766155387LL;
int zero = 0;
int var_18 = -182867958;
int var_19 = 790634184;
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
