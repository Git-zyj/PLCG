#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned short var_3 = (unsigned short)52938;
unsigned int var_12 = 2670989510U;
int zero = 0;
unsigned long long int var_14 = 7981651692809691823ULL;
long long int var_15 = 2764992219633174430LL;
short var_16 = (short)-101;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
