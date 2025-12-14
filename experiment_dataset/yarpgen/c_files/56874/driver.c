#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6003665343501840926LL;
signed char var_9 = (signed char)39;
long long int var_11 = 2873388740584143876LL;
int zero = 0;
short var_12 = (short)31348;
unsigned long long int var_13 = 3253235992791161692ULL;
short var_14 = (short)-9417;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
