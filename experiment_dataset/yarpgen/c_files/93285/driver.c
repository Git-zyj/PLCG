#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)84;
signed char var_3 = (signed char)-111;
signed char var_6 = (signed char)48;
signed char var_14 = (signed char)-119;
int zero = 0;
unsigned char var_18 = (unsigned char)127;
unsigned short var_19 = (unsigned short)32183;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
