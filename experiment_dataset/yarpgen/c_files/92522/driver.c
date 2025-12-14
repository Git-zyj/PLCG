#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)75;
long long int var_4 = -3621186339310619356LL;
unsigned short var_8 = (unsigned short)17492;
unsigned int var_10 = 2864580059U;
int zero = 0;
unsigned long long int var_14 = 15477343803535212530ULL;
unsigned short var_15 = (unsigned short)14109;
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
