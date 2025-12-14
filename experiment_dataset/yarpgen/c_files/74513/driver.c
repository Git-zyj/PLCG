#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -581681355;
unsigned char var_3 = (unsigned char)213;
unsigned long long int var_4 = 8992557372561577047ULL;
unsigned int var_9 = 1906164392U;
int zero = 0;
short var_13 = (short)-29876;
int var_14 = -337444900;
unsigned long long int var_15 = 17726518464487614653ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
