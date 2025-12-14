#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-4302;
unsigned int var_10 = 2417911634U;
int var_11 = 1226322918;
short var_14 = (short)-19333;
int zero = 0;
long long int var_20 = 3786299739175934479LL;
long long int var_21 = 2117899206445508285LL;
void init() {
}

void checksum() {
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
