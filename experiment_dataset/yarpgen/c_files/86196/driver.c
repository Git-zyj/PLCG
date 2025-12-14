#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14227174553442979721ULL;
unsigned int var_7 = 1528905009U;
short var_9 = (short)20116;
int zero = 0;
unsigned char var_14 = (unsigned char)230;
long long int var_15 = -3481275901856958606LL;
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
