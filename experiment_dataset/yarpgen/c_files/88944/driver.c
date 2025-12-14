#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3909760807U;
unsigned int var_18 = 3820075970U;
int zero = 0;
unsigned char var_19 = (unsigned char)27;
signed char var_20 = (signed char)-92;
unsigned short var_21 = (unsigned short)22757;
int var_22 = -1927746751;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
