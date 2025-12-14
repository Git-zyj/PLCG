#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17976993409269820779ULL;
unsigned long long int var_4 = 17758827201255998459ULL;
signed char var_8 = (signed char)-41;
unsigned long long int var_10 = 3849959953369843565ULL;
long long int var_14 = -4607097898356652872LL;
long long int var_16 = -8825687556932647847LL;
int zero = 0;
int var_17 = -2060411427;
long long int var_18 = 3393202803299460644LL;
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
