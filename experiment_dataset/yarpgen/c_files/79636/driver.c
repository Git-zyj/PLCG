#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -361022457552619420LL;
unsigned char var_3 = (unsigned char)232;
unsigned short var_9 = (unsigned short)31476;
int zero = 0;
unsigned int var_14 = 2485231868U;
long long int var_15 = 3680141398726331781LL;
long long int var_16 = 134124765971917638LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
