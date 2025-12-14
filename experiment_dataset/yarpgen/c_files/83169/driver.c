#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
unsigned char var_1 = (unsigned char)153;
short var_2 = (short)988;
signed char var_4 = (signed char)83;
short var_6 = (short)6624;
int var_9 = 549102498;
int zero = 0;
unsigned int var_10 = 293609736U;
signed char var_11 = (signed char)-71;
unsigned char var_12 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
