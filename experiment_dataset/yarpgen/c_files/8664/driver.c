#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6568;
unsigned char var_7 = (unsigned char)168;
int var_8 = -628051807;
int zero = 0;
unsigned long long int var_10 = 5653236705459033163ULL;
unsigned long long int var_11 = 11099911958871091803ULL;
long long int var_12 = -3050962589050748437LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
