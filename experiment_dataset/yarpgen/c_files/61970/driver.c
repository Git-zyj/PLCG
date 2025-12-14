#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1516697869U;
long long int var_7 = -1531584670452487845LL;
long long int var_9 = 7103937196595932211LL;
int zero = 0;
short var_10 = (short)1829;
unsigned short var_11 = (unsigned short)34807;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
