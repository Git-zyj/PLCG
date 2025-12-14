#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1899353860U;
unsigned char var_8 = (unsigned char)51;
int var_9 = 121669112;
int zero = 0;
short var_11 = (short)-12222;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8838446034069585779LL;
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
