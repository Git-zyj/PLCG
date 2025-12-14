#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7841948143317899291ULL;
long long int var_6 = 3400302703507448483LL;
unsigned long long int var_9 = 6426892938030624062ULL;
int zero = 0;
short var_10 = (short)-23019;
int var_11 = -1893121721;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
