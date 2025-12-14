#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7994;
signed char var_3 = (signed char)0;
long long int var_9 = -3103727764460105699LL;
int zero = 0;
short var_10 = (short)-28033;
long long int var_11 = -5864119122953072641LL;
unsigned long long int var_12 = 5182131836608239399ULL;
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
