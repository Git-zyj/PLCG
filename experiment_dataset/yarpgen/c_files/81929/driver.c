#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 779407802;
unsigned char var_2 = (unsigned char)31;
unsigned int var_3 = 3453080366U;
int var_9 = -1299952179;
int var_10 = -2066967319;
int zero = 0;
unsigned char var_20 = (unsigned char)108;
signed char var_21 = (signed char)25;
signed char var_22 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
