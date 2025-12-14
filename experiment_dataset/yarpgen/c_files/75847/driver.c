#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1769495448;
int var_6 = 733627266;
signed char var_12 = (signed char)-104;
signed char var_14 = (signed char)6;
int zero = 0;
int var_19 = -435356170;
long long int var_20 = -1869445107518455587LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
