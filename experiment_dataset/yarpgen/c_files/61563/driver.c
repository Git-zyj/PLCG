#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1363793061U;
unsigned int var_9 = 597185072U;
unsigned char var_10 = (unsigned char)104;
short var_11 = (short)-5378;
int zero = 0;
unsigned int var_12 = 2700424794U;
int var_13 = 1966396773;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
