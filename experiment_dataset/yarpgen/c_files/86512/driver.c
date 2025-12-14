#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8389266255286360238LL;
long long int var_4 = -539913369987914406LL;
int var_6 = 737991184;
int zero = 0;
unsigned long long int var_13 = 11965825448712472027ULL;
signed char var_14 = (signed char)64;
short var_15 = (short)8902;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
