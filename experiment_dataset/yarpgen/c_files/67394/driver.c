#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 892899069393865107LL;
unsigned char var_2 = (unsigned char)151;
unsigned char var_4 = (unsigned char)29;
int zero = 0;
unsigned long long int var_14 = 6188921233117948056ULL;
int var_15 = -1054631677;
void init() {
}

void checksum() {
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
