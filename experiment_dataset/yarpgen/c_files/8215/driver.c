#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)168;
signed char var_10 = (signed char)-25;
unsigned short var_19 = (unsigned short)25691;
int zero = 0;
long long int var_20 = 5756817477984887721LL;
unsigned char var_21 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
