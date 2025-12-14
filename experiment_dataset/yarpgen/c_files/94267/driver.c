#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12496809115244104667ULL;
unsigned char var_4 = (unsigned char)74;
signed char var_8 = (signed char)3;
int zero = 0;
int var_12 = -1072020287;
long long int var_13 = 5565686626311587867LL;
unsigned char var_14 = (unsigned char)213;
unsigned int var_15 = 1029217222U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
