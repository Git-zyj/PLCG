#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1598971827;
int var_2 = 1642707647;
unsigned long long int var_3 = 4990687650578811449ULL;
signed char var_4 = (signed char)-40;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 397250995U;
short var_11 = (short)-14751;
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
