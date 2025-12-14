#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 60962325;
unsigned int var_3 = 2366570982U;
int var_9 = 1510882526;
unsigned short var_10 = (unsigned short)35996;
int zero = 0;
int var_11 = -1445543938;
unsigned int var_12 = 1896736593U;
void init() {
}

void checksum() {
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
