#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 72506323;
unsigned long long int var_4 = 3000803286211950800ULL;
unsigned char var_5 = (unsigned char)2;
long long int var_8 = -979215957061756243LL;
int zero = 0;
unsigned char var_15 = (unsigned char)155;
unsigned short var_16 = (unsigned short)27621;
unsigned char var_17 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
