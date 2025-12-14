#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1946251027U;
unsigned long long int var_8 = 2584586633351261474ULL;
long long int var_9 = 5671093677517374161LL;
int zero = 0;
long long int var_10 = -3830133805530092810LL;
int var_11 = -566926782;
signed char var_12 = (signed char)27;
unsigned char var_13 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
