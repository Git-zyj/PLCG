#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3106258704U;
signed char var_7 = (signed char)118;
unsigned long long int var_9 = 12245678948941621452ULL;
unsigned char var_10 = (unsigned char)70;
int zero = 0;
unsigned int var_13 = 2730639347U;
unsigned char var_14 = (unsigned char)2;
void init() {
}

void checksum() {
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
