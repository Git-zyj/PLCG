#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2841555313397640183LL;
unsigned long long int var_5 = 2587443228020436941ULL;
long long int var_7 = 3612561639351787198LL;
signed char var_8 = (signed char)72;
unsigned long long int var_9 = 6145735357766443210ULL;
signed char var_12 = (signed char)28;
unsigned char var_13 = (unsigned char)84;
int zero = 0;
short var_20 = (short)-4393;
unsigned long long int var_21 = 4111718323916457911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
