#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28832;
long long int var_10 = -8353833002879044088LL;
long long int var_17 = 8806676698226705129LL;
int zero = 0;
unsigned int var_20 = 1451533491U;
unsigned int var_21 = 3791253257U;
unsigned int var_22 = 2512385759U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
