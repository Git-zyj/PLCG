#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13333525599212812382ULL;
unsigned char var_14 = (unsigned char)46;
int zero = 0;
unsigned long long int var_15 = 3204383593021310068ULL;
unsigned char var_16 = (unsigned char)71;
unsigned char var_17 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
