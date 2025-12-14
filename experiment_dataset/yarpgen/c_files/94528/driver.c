#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
long long int var_3 = 8677573322262484395LL;
signed char var_4 = (signed char)73;
unsigned long long int var_6 = 15031511406121323180ULL;
unsigned long long int var_12 = 14381148549225159992ULL;
long long int var_13 = 168619102222210549LL;
int zero = 0;
unsigned long long int var_15 = 2871279215269039069ULL;
short var_16 = (short)-12591;
signed char var_17 = (signed char)77;
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
