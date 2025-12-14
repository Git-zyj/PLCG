#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-20;
int var_4 = 290038605;
short var_12 = (short)-16293;
int var_13 = -2128490992;
int zero = 0;
signed char var_15 = (signed char)-123;
short var_16 = (short)-20879;
unsigned char var_17 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
