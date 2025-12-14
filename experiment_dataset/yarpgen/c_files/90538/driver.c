#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)64;
unsigned char var_6 = (unsigned char)25;
long long int var_7 = 8336731124390280246LL;
signed char var_11 = (signed char)-122;
unsigned char var_13 = (unsigned char)216;
int zero = 0;
unsigned long long int var_16 = 18100792050286669563ULL;
unsigned char var_17 = (unsigned char)145;
void init() {
}

void checksum() {
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
