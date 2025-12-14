#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2663212026783012715ULL;
long long int var_2 = 1503841700294045721LL;
long long int var_9 = -8771465853573197117LL;
long long int var_10 = -2679267028886839186LL;
int zero = 0;
signed char var_14 = (signed char)31;
unsigned int var_15 = 4021969528U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
