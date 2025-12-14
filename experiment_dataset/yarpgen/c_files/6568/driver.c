#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12137471336882850313ULL;
unsigned int var_2 = 1780920894U;
short var_6 = (short)19599;
unsigned char var_7 = (unsigned char)67;
unsigned char var_8 = (unsigned char)224;
short var_10 = (short)-6754;
int zero = 0;
long long int var_11 = 2261540856882255053LL;
unsigned char var_12 = (unsigned char)143;
long long int var_13 = -2537654945486420572LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
