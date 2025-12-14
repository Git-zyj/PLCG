#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8862624658374568804LL;
unsigned long long int var_6 = 4608096401866677172ULL;
int zero = 0;
short var_11 = (short)-16;
long long int var_12 = 1236687884714389306LL;
unsigned long long int var_13 = 12947954364335784789ULL;
void init() {
}

void checksum() {
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
