#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-10190;
long long int var_11 = 669953762478373772LL;
unsigned char var_13 = (unsigned char)79;
long long int var_14 = -4219561672039025027LL;
int zero = 0;
unsigned int var_19 = 1792448493U;
signed char var_20 = (signed char)25;
unsigned short var_21 = (unsigned short)29275;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
