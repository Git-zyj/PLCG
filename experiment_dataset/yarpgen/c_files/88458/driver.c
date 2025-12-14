#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7743689072375165132ULL;
unsigned long long int var_7 = 16016046263927718926ULL;
int zero = 0;
unsigned long long int var_11 = 6095751816743466115ULL;
unsigned int var_12 = 3415845067U;
unsigned char var_13 = (unsigned char)162;
unsigned int var_14 = 2051555464U;
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
