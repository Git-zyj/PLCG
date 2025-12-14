#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 689322777141775351ULL;
unsigned long long int var_7 = 6107450646634913595ULL;
int zero = 0;
int var_13 = 272404413;
unsigned long long int var_14 = 16093177275961928579ULL;
int var_15 = -1584280670;
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
