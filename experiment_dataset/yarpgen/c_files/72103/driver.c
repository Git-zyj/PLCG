#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4365580330802939231ULL;
unsigned char var_7 = (unsigned char)235;
unsigned char var_10 = (unsigned char)86;
int zero = 0;
unsigned char var_16 = (unsigned char)84;
long long int var_17 = -5374983374467628779LL;
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
