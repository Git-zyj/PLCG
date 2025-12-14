#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 97945147;
int var_6 = -311640341;
unsigned long long int var_7 = 10206589469589802763ULL;
short var_17 = (short)16104;
int zero = 0;
unsigned short var_20 = (unsigned short)27050;
unsigned char var_21 = (unsigned char)137;
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
