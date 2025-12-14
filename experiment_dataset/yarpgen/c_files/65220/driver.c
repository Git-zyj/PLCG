#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3856303504221603889ULL;
unsigned long long int var_8 = 17606336526093442860ULL;
unsigned char var_9 = (unsigned char)121;
short var_10 = (short)31359;
int zero = 0;
short var_12 = (short)-18531;
unsigned short var_13 = (unsigned short)19673;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
