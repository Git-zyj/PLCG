#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1669452877U;
short var_4 = (short)-2894;
unsigned short var_9 = (unsigned short)27095;
int zero = 0;
unsigned short var_20 = (unsigned short)61038;
unsigned int var_21 = 1039678206U;
unsigned long long int var_22 = 10308056991432322925ULL;
unsigned short var_23 = (unsigned short)524;
signed char var_24 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
