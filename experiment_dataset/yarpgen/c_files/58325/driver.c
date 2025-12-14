#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -887366653;
short var_6 = (short)11742;
unsigned long long int var_7 = 1438663137608285103ULL;
short var_8 = (short)-25975;
int zero = 0;
short var_19 = (short)-27560;
int var_20 = 141723469;
short var_21 = (short)26799;
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
