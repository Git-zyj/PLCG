#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-107;
unsigned long long int var_6 = 10343941554914618397ULL;
short var_9 = (short)26145;
int zero = 0;
long long int var_10 = -6005802830937212852LL;
long long int var_11 = 5281701123158263676LL;
unsigned long long int var_12 = 17228556864612507927ULL;
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
