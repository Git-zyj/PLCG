#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2874288937U;
long long int var_11 = -1337296001792941126LL;
signed char var_12 = (signed char)-64;
unsigned long long int var_13 = 7532340577000576126ULL;
int zero = 0;
long long int var_17 = 429223278307663164LL;
short var_18 = (short)-12123;
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
