#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1762165110661796489LL;
unsigned short var_11 = (unsigned short)32281;
unsigned short var_14 = (unsigned short)61657;
int zero = 0;
unsigned short var_15 = (unsigned short)52225;
short var_16 = (short)16791;
short var_17 = (short)32401;
short var_18 = (short)-27106;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
