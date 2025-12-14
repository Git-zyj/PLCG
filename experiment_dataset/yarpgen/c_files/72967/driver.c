#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 1654337936941752688ULL;
unsigned char var_16 = (unsigned char)48;
int zero = 0;
unsigned long long int var_18 = 17214814007739515703ULL;
unsigned long long int var_19 = 14802959525490381927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
