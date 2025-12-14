#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2625365120920671026LL;
signed char var_5 = (signed char)-26;
int zero = 0;
unsigned long long int var_15 = 14618266791182892410ULL;
short var_16 = (short)-27346;
long long int var_17 = -7134999270706354178LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
