#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2188950302U;
unsigned int var_8 = 2287873829U;
unsigned int var_9 = 1815585681U;
int zero = 0;
unsigned int var_10 = 3636579378U;
unsigned int var_11 = 3030231137U;
unsigned int var_12 = 858648610U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
