#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21469;
unsigned long long int var_5 = 18023496039147132052ULL;
unsigned char var_6 = (unsigned char)172;
int zero = 0;
long long int var_17 = 5568815364656044793LL;
int var_18 = 1011018135;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
