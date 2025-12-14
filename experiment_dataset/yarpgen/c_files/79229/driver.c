#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 531747854U;
unsigned short var_3 = (unsigned short)32666;
long long int var_8 = -7835416289413579725LL;
long long int var_13 = -40501583842346039LL;
unsigned int var_16 = 1179141161U;
int zero = 0;
short var_17 = (short)16966;
int var_18 = -1800703324;
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
