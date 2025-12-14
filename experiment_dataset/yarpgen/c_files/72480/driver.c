#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-125;
signed char var_5 = (signed char)-8;
signed char var_10 = (signed char)-93;
short var_13 = (short)20613;
int zero = 0;
int var_20 = 1420830393;
signed char var_21 = (signed char)6;
unsigned char var_22 = (unsigned char)82;
short var_23 = (short)-12338;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
