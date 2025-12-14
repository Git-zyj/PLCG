#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5773;
unsigned long long int var_6 = 6831821613176389541ULL;
int var_9 = 893609463;
signed char var_11 = (signed char)10;
unsigned long long int var_17 = 17283294237704391711ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
unsigned long long int var_21 = 8406757278809186733ULL;
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
