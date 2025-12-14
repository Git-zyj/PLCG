#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8957;
unsigned long long int var_5 = 15681622334658853899ULL;
int zero = 0;
unsigned int var_10 = 929383468U;
unsigned long long int var_11 = 179947990543495621ULL;
int var_12 = -1118729914;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
