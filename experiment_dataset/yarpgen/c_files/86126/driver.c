#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -510773538810632800LL;
unsigned char var_4 = (unsigned char)79;
long long int var_9 = -2278029804007589828LL;
int zero = 0;
unsigned int var_13 = 1227089988U;
signed char var_14 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
