#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4410013956604661768LL;
unsigned short var_6 = (unsigned short)58197;
int zero = 0;
unsigned short var_13 = (unsigned short)14314;
unsigned long long int var_14 = 14275729058954671711ULL;
unsigned long long int var_15 = 17332837558194471072ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
