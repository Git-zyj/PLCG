#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-66;
unsigned int var_8 = 1268675405U;
short var_9 = (short)19569;
short var_10 = (short)-6026;
signed char var_12 = (signed char)107;
int zero = 0;
int var_16 = 1912102957;
int var_17 = 2005024654;
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
