#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4822;
signed char var_5 = (signed char)79;
unsigned short var_6 = (unsigned short)34095;
int var_9 = -979848478;
signed char var_10 = (signed char)-67;
int zero = 0;
signed char var_12 = (signed char)122;
signed char var_13 = (signed char)-4;
int var_14 = 152113682;
unsigned short var_15 = (unsigned short)61193;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
