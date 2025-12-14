#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 14406161877290957793ULL;
unsigned char var_17 = (unsigned char)217;
int zero = 0;
unsigned short var_18 = (unsigned short)55241;
unsigned char var_19 = (unsigned char)23;
unsigned short var_20 = (unsigned short)45764;
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
