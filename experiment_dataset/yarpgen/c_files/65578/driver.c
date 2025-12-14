#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)246;
long long int var_12 = 453017662441704919LL;
unsigned int var_14 = 2334911211U;
int var_15 = -340401495;
int zero = 0;
unsigned long long int var_20 = 12771381887677731743ULL;
unsigned short var_21 = (unsigned short)29528;
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
