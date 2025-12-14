#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1045232505U;
signed char var_5 = (signed char)-111;
long long int var_8 = 6248774549307342553LL;
unsigned int var_9 = 2584156555U;
int zero = 0;
short var_13 = (short)27259;
short var_14 = (short)-30513;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
