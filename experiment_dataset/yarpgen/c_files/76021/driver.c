#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1772607722U;
short var_5 = (short)-29611;
unsigned short var_8 = (unsigned short)61418;
unsigned int var_9 = 2562211280U;
int zero = 0;
unsigned int var_18 = 30276701U;
short var_19 = (short)20494;
short var_20 = (short)21827;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
