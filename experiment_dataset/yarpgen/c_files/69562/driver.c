#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7174701386382979714LL;
signed char var_6 = (signed char)48;
signed char var_7 = (signed char)-67;
signed char var_12 = (signed char)17;
int zero = 0;
signed char var_13 = (signed char)-17;
unsigned char var_14 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
