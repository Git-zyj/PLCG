#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2245744041779566667LL;
long long int var_3 = -7199785127680887001LL;
unsigned long long int var_5 = 3046585067098279011ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)194;
int var_13 = -872919258;
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
