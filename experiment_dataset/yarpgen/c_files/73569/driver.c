#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 726686056U;
long long int var_9 = -4962982982735277302LL;
unsigned long long int var_10 = 16735768853752971602ULL;
unsigned int var_14 = 1825561565U;
int zero = 0;
unsigned int var_16 = 2568632846U;
long long int var_17 = 7944373697141351663LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
