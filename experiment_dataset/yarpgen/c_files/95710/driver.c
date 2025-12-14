#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)24240;
unsigned short var_12 = (unsigned short)40851;
unsigned char var_13 = (unsigned char)49;
int zero = 0;
unsigned int var_20 = 4103308659U;
unsigned short var_21 = (unsigned short)38419;
int var_22 = -335335034;
void init() {
}

void checksum() {
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
