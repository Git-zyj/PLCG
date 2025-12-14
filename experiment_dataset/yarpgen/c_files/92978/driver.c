#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4166652122989562131ULL;
unsigned long long int var_7 = 1621251797020171972ULL;
unsigned short var_10 = (unsigned short)4930;
int zero = 0;
unsigned int var_12 = 1260498929U;
unsigned int var_13 = 1066708016U;
void init() {
}

void checksum() {
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
