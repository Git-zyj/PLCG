#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 408663586U;
unsigned int var_6 = 1805987281U;
short var_7 = (short)-24048;
unsigned int var_9 = 125189597U;
int zero = 0;
unsigned int var_10 = 3468493755U;
short var_11 = (short)-5458;
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
