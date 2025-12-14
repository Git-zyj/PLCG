#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43127;
int var_1 = 1156091693;
unsigned short var_4 = (unsigned short)24742;
int var_5 = 979556161;
unsigned short var_8 = (unsigned short)39279;
int var_9 = 1951626659;
unsigned short var_10 = (unsigned short)28655;
int zero = 0;
int var_11 = -1177927876;
int var_12 = -1729871673;
int var_13 = 697502624;
int var_14 = 1303603419;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
