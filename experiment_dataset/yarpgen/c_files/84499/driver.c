#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1940747032659193857LL;
int var_5 = 951658833;
unsigned long long int var_6 = 17393890700322610629ULL;
signed char var_7 = (signed char)-2;
int zero = 0;
int var_10 = 1624988884;
unsigned long long int var_11 = 14186112262264435115ULL;
int var_12 = -1519708370;
unsigned int var_13 = 3903588601U;
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
