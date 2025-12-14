#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)118;
int var_11 = -1383250885;
unsigned short var_16 = (unsigned short)2866;
int zero = 0;
unsigned long long int var_17 = 14195014960686893018ULL;
long long int var_18 = 1424863414548838453LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
