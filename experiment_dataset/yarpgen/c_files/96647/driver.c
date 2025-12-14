#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -387311151;
unsigned long long int var_10 = 12375632046661119121ULL;
long long int var_13 = 4459313420258954251LL;
int zero = 0;
long long int var_16 = -2873112435845846377LL;
unsigned char var_17 = (unsigned char)93;
unsigned long long int var_18 = 6690452630017439366ULL;
unsigned long long int var_19 = 5550806485281600774ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
