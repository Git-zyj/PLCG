#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 745317217;
unsigned int var_7 = 1929619607U;
unsigned long long int var_11 = 17265853623920518524ULL;
int zero = 0;
long long int var_19 = -2832282683749521945LL;
int var_20 = -1897458601;
long long int var_21 = 3394982596088443798LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
