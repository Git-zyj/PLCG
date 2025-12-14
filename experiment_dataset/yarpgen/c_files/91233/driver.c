#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3509880618613489625LL;
unsigned short var_4 = (unsigned short)61311;
unsigned long long int var_5 = 5399045817085182981ULL;
long long int var_7 = 3698133368940698306LL;
unsigned int var_9 = 3436008029U;
int zero = 0;
long long int var_15 = -6675460103123713414LL;
signed char var_16 = (signed char)103;
unsigned short var_17 = (unsigned short)30067;
int var_18 = -1351866818;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
