#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 3418381818293915365LL;
unsigned char var_15 = (unsigned char)46;
int var_16 = -1133944465;
int zero = 0;
unsigned int var_18 = 3017479764U;
unsigned char var_19 = (unsigned char)44;
unsigned long long int var_20 = 14490648132449634036ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
