#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)18041;
unsigned int var_13 = 1395471432U;
unsigned int var_17 = 4160622136U;
int zero = 0;
unsigned int var_20 = 3951745483U;
int var_21 = 413243992;
int var_22 = -686518242;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
