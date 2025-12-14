#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)106;
unsigned long long int var_6 = 12380571328433000257ULL;
int var_7 = -1262201008;
long long int var_12 = -3580237663224926713LL;
int zero = 0;
unsigned long long int var_15 = 4550336692966514380ULL;
long long int var_16 = -6051823819515498183LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
