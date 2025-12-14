#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -310323983;
int var_2 = 843882214;
int var_6 = 1141280440;
int var_7 = -511455486;
int var_9 = -1977217558;
int var_12 = -1458589687;
int zero = 0;
int var_16 = 1580722092;
int var_17 = 707977461;
int var_18 = 399647275;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
