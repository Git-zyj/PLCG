#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5181013486863745653LL;
unsigned char var_9 = (unsigned char)9;
unsigned long long int var_12 = 1260566577782372766ULL;
int zero = 0;
signed char var_14 = (signed char)-94;
long long int var_15 = 5731540214050142033LL;
void init() {
}

void checksum() {
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
