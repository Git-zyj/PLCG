#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6167447343143820889ULL;
long long int var_9 = -6139360494141267873LL;
int var_12 = 1462436250;
int zero = 0;
unsigned long long int var_13 = 7320094996758684179ULL;
int var_14 = 2047697094;
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
