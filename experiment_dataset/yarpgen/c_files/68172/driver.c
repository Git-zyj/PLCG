#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)225;
unsigned char var_6 = (unsigned char)49;
unsigned long long int var_9 = 6559640211616874918ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)36;
unsigned char var_12 = (unsigned char)63;
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
