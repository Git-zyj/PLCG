#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)72;
signed char var_2 = (signed char)64;
unsigned long long int var_3 = 7544438412630376479ULL;
unsigned char var_6 = (unsigned char)96;
int var_7 = 721622041;
short var_8 = (short)-24934;
int zero = 0;
short var_10 = (short)-31638;
short var_11 = (short)14304;
long long int var_12 = 4983689735798414568LL;
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
