#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1617321161;
unsigned char var_16 = (unsigned char)49;
int zero = 0;
long long int var_19 = -271967454526887756LL;
unsigned char var_20 = (unsigned char)48;
unsigned long long int var_21 = 13508719916582059484ULL;
unsigned long long int var_22 = 2450084784749330073ULL;
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
