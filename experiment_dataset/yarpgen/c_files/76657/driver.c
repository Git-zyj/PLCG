#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17595389311291208800ULL;
unsigned short var_4 = (unsigned short)36329;
unsigned long long int var_12 = 1051327590361015069ULL;
int zero = 0;
signed char var_16 = (signed char)-12;
unsigned char var_17 = (unsigned char)194;
void init() {
}

void checksum() {
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
