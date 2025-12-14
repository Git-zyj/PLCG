#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)41;
long long int var_6 = 5108984024204458508LL;
unsigned char var_7 = (unsigned char)145;
long long int var_10 = 3198298738672530747LL;
int zero = 0;
int var_13 = 1335496764;
unsigned char var_14 = (unsigned char)95;
unsigned char var_15 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
