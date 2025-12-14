#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12745669352079397420ULL;
unsigned char var_3 = (unsigned char)241;
unsigned long long int var_7 = 4096535548642869340ULL;
unsigned long long int var_8 = 18243448662669901400ULL;
long long int var_9 = -8798134083836976283LL;
signed char var_10 = (signed char)20;
signed char var_14 = (signed char)105;
int zero = 0;
unsigned char var_15 = (unsigned char)7;
long long int var_16 = -7650402174707750211LL;
int var_17 = -476873954;
int var_18 = 160407601;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
