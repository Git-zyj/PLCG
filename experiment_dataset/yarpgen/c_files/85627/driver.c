#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9458;
int var_2 = -1965570920;
int var_5 = -1593505964;
int var_9 = -574904613;
int zero = 0;
short var_10 = (short)-12;
unsigned int var_11 = 1158335125U;
unsigned int var_12 = 3040970408U;
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
