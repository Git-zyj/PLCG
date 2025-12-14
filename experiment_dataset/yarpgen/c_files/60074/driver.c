#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2786307728392414116LL;
short var_8 = (short)-18487;
int var_9 = 1602474656;
int zero = 0;
signed char var_14 = (signed char)77;
unsigned char var_15 = (unsigned char)122;
long long int var_16 = -8474267809823128937LL;
unsigned int var_17 = 3964814603U;
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
