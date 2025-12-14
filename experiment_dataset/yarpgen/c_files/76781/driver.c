#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1819468944U;
signed char var_5 = (signed char)-52;
unsigned int var_9 = 2599508111U;
int zero = 0;
unsigned int var_13 = 4112871957U;
unsigned char var_14 = (unsigned char)238;
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
