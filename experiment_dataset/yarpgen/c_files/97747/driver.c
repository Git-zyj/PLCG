#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3470860652023649004LL;
unsigned int var_3 = 1545487277U;
unsigned long long int var_5 = 9232540005768524748ULL;
int zero = 0;
unsigned int var_12 = 4173606356U;
unsigned int var_13 = 3924037441U;
void init() {
}

void checksum() {
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
