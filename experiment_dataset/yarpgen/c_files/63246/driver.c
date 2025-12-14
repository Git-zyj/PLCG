#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2728070936039553780LL;
unsigned short var_7 = (unsigned short)18253;
unsigned long long int var_9 = 17918342097316394039ULL;
int var_10 = 2043064785;
int zero = 0;
unsigned char var_14 = (unsigned char)124;
unsigned long long int var_15 = 7561728747508555646ULL;
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
