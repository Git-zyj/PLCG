#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3360542205U;
unsigned short var_4 = (unsigned short)18705;
unsigned short var_9 = (unsigned short)24173;
unsigned int var_13 = 2623544157U;
int zero = 0;
int var_14 = -1199656893;
short var_15 = (short)-25375;
void init() {
}

void checksum() {
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
