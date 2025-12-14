#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
unsigned int var_2 = 1495758397U;
signed char var_8 = (signed char)-106;
int zero = 0;
unsigned char var_12 = (unsigned char)127;
signed char var_13 = (signed char)15;
unsigned int var_14 = 1597566998U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
