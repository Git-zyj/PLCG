#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5607981203849724801LL;
unsigned int var_7 = 2839884089U;
int var_11 = -2101511389;
unsigned short var_13 = (unsigned short)58779;
int zero = 0;
short var_15 = (short)3537;
long long int var_16 = -8798560928410003938LL;
unsigned long long int var_17 = 15656826071906535815ULL;
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
