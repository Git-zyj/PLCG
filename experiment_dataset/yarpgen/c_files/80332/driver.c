#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1377;
unsigned long long int var_9 = 1958616597262319213ULL;
unsigned char var_12 = (unsigned char)179;
long long int var_13 = -1727920477987836698LL;
long long int var_17 = 1476818041732333725LL;
int zero = 0;
signed char var_20 = (signed char)88;
signed char var_21 = (signed char)-74;
_Bool var_22 = (_Bool)0;
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
