#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1203467559;
unsigned long long int var_4 = 15944202947030693734ULL;
short var_6 = (short)13965;
int zero = 0;
unsigned short var_15 = (unsigned short)7169;
short var_16 = (short)-27960;
void init() {
}

void checksum() {
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
