#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17873721452136198319ULL;
unsigned long long int var_6 = 11148932167787998916ULL;
int var_8 = 1587333130;
unsigned long long int var_13 = 9399099653223301222ULL;
int zero = 0;
long long int var_14 = -6095577722983619467LL;
unsigned long long int var_15 = 546154722252027910ULL;
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
