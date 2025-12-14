#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5058026116114276858LL;
unsigned long long int var_7 = 4669274103335424736ULL;
int var_9 = -1433016082;
int zero = 0;
signed char var_10 = (signed char)51;
unsigned char var_11 = (unsigned char)38;
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
