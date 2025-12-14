#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 168444296U;
unsigned int var_5 = 567299803U;
unsigned int var_9 = 3907280722U;
int zero = 0;
int var_10 = 121003734;
unsigned char var_11 = (unsigned char)6;
long long int var_12 = -6582327120372551139LL;
int var_13 = 746241802;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
