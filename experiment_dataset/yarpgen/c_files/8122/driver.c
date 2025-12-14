#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3186121059U;
signed char var_2 = (signed char)108;
int var_3 = -186081989;
long long int var_6 = 7603421659255798665LL;
signed char var_7 = (signed char)-83;
int zero = 0;
short var_15 = (short)-22147;
signed char var_16 = (signed char)70;
unsigned int var_17 = 2456651915U;
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
