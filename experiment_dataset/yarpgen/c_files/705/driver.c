#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19012;
unsigned int var_6 = 141153547U;
signed char var_16 = (signed char)-71;
int zero = 0;
long long int var_19 = -1298471867648493085LL;
int var_20 = -1952061386;
int var_21 = -1722625112;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
