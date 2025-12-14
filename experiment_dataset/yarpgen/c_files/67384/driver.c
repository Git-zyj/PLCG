#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 940671077297614553ULL;
unsigned short var_4 = (unsigned short)51454;
unsigned long long int var_9 = 10601668248832903901ULL;
int zero = 0;
unsigned long long int var_13 = 6399953957746979450ULL;
int var_14 = -120376723;
void init() {
}

void checksum() {
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
