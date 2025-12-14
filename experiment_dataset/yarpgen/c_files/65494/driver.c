#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 525733569U;
unsigned short var_1 = (unsigned short)25292;
unsigned int var_2 = 1304361818U;
unsigned int var_5 = 1160556895U;
unsigned int var_10 = 2806267705U;
int zero = 0;
unsigned int var_14 = 2179445924U;
unsigned int var_15 = 1358887852U;
void init() {
}

void checksum() {
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
