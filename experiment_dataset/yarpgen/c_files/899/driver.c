#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9241;
unsigned int var_10 = 1964065050U;
long long int var_11 = 5416782430809680097LL;
int zero = 0;
long long int var_12 = 8092106658989557560LL;
long long int var_13 = -157869098359157347LL;
long long int var_14 = -988181757183068518LL;
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
