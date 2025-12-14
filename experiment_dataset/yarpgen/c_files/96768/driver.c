#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 418735992U;
signed char var_10 = (signed char)2;
unsigned short var_12 = (unsigned short)43557;
int zero = 0;
signed char var_16 = (signed char)-69;
signed char var_17 = (signed char)-44;
short var_18 = (short)25486;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
