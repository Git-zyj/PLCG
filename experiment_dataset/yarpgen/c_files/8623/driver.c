#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53540;
unsigned int var_9 = 3886625253U;
unsigned short var_10 = (unsigned short)25145;
unsigned int var_12 = 2973821055U;
int zero = 0;
signed char var_16 = (signed char)-11;
signed char var_17 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
