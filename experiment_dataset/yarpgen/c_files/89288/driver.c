#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9732467304684963233ULL;
int var_6 = 1296283906;
unsigned long long int var_7 = 5110421393810323702ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)182;
unsigned int var_21 = 2828725576U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
