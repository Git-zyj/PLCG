#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)38;
unsigned char var_16 = (unsigned char)249;
unsigned char var_17 = (unsigned char)130;
int zero = 0;
long long int var_19 = -87395024898310132LL;
unsigned char var_20 = (unsigned char)156;
unsigned char var_21 = (unsigned char)147;
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
