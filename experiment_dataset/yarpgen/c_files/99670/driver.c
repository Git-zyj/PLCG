#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8278424836524383690LL;
long long int var_4 = 3318967937297524783LL;
unsigned char var_12 = (unsigned char)155;
int zero = 0;
unsigned char var_14 = (unsigned char)53;
unsigned long long int var_15 = 11276840190187577619ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
