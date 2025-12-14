#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)127;
unsigned short var_12 = (unsigned short)38584;
signed char var_13 = (signed char)13;
int zero = 0;
unsigned long long int var_15 = 14316016678217725581ULL;
unsigned char var_16 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
