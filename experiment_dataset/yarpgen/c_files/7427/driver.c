#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6289043072753993440LL;
int var_8 = 196030433;
unsigned long long int var_9 = 5171111428821968973ULL;
unsigned short var_10 = (unsigned short)65438;
signed char var_13 = (signed char)67;
int zero = 0;
short var_14 = (short)-22577;
signed char var_15 = (signed char)-80;
unsigned long long int var_16 = 2116499686572719830ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
