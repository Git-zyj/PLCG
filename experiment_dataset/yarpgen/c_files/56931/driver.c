#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)72;
unsigned char var_5 = (unsigned char)29;
signed char var_6 = (signed char)43;
int zero = 0;
unsigned char var_13 = (unsigned char)92;
unsigned long long int var_14 = 14752320707437711298ULL;
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
