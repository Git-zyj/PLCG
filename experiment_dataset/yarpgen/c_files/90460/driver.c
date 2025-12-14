#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2314774014539268371LL;
unsigned long long int var_6 = 1034522989027965024ULL;
unsigned char var_10 = (unsigned char)220;
unsigned long long int var_12 = 2179245207992872644ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)30179;
unsigned long long int var_17 = 5916413445559351445ULL;
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
