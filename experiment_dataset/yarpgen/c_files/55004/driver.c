#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)87;
signed char var_9 = (signed char)65;
short var_12 = (short)-23223;
int var_14 = 1413273904;
int zero = 0;
unsigned long long int var_18 = 4432271079513342917ULL;
long long int var_19 = -1774874703096893460LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
