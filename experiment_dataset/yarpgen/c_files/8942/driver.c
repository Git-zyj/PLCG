#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1658406941657883675LL;
long long int var_4 = -8159478800222765971LL;
unsigned int var_5 = 225268079U;
long long int var_8 = 8876949153055432476LL;
unsigned char var_9 = (unsigned char)28;
signed char var_10 = (signed char)-64;
short var_11 = (short)-30135;
long long int var_12 = -8884364776702592712LL;
int zero = 0;
unsigned char var_14 = (unsigned char)19;
long long int var_15 = -3984285771126134316LL;
short var_16 = (short)-10221;
unsigned long long int var_17 = 6389693044079828551ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
