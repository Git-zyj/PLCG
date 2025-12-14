#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3632266210U;
long long int var_12 = -5233990021482758450LL;
unsigned short var_13 = (unsigned short)6624;
int zero = 0;
long long int var_18 = -4475518529290449723LL;
unsigned int var_19 = 967666789U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
