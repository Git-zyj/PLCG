#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15364990822467714814ULL;
unsigned int var_3 = 2445143664U;
unsigned short var_4 = (unsigned short)51927;
unsigned long long int var_6 = 4444031815564512519ULL;
unsigned long long int var_9 = 14747468859544477257ULL;
int zero = 0;
unsigned int var_14 = 773563264U;
unsigned int var_15 = 118758981U;
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
