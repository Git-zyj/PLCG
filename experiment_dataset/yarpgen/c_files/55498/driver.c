#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-93;
long long int var_4 = 2336500761374133589LL;
short var_11 = (short)-6491;
long long int var_14 = 6167871085961356080LL;
int zero = 0;
long long int var_17 = -6486579179128189970LL;
unsigned char var_18 = (unsigned char)244;
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
