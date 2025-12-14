#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1118810236305948317LL;
long long int var_10 = -1327701625818986376LL;
int zero = 0;
unsigned long long int var_15 = 3435360211588024213ULL;
unsigned int var_16 = 1167360371U;
unsigned char var_17 = (unsigned char)132;
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
