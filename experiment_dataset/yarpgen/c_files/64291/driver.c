#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5498841315622865115LL;
unsigned int var_7 = 1834119748U;
signed char var_12 = (signed char)-71;
int zero = 0;
long long int var_15 = 7099416002303010430LL;
unsigned char var_16 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
