#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)43;
unsigned int var_12 = 2363742400U;
long long int var_13 = -3573742904927338385LL;
int zero = 0;
unsigned short var_17 = (unsigned short)51394;
unsigned char var_18 = (unsigned char)34;
unsigned long long int var_19 = 2704756708770547809ULL;
unsigned short var_20 = (unsigned short)26426;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
