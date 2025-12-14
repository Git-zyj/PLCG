#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10801286015255477033ULL;
unsigned long long int var_1 = 9262883520603587682ULL;
short var_6 = (short)20696;
unsigned long long int var_9 = 4786836342252788968ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)31097;
unsigned short var_12 = (unsigned short)58837;
void init() {
}

void checksum() {
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
