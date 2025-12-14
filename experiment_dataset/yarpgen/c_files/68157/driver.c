#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)155;
short var_9 = (short)-30611;
unsigned short var_10 = (unsigned short)47433;
int zero = 0;
short var_11 = (short)-8216;
unsigned long long int var_12 = 10887647886181126285ULL;
unsigned char var_13 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
