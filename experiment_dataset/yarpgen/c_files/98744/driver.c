#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1648264670;
int var_3 = 926022664;
unsigned short var_5 = (unsigned short)905;
unsigned int var_7 = 2973936315U;
unsigned int var_9 = 2414543557U;
int zero = 0;
unsigned int var_14 = 3080306222U;
long long int var_15 = 2131640886852830365LL;
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
