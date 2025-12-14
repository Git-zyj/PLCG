#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6890159227389502221LL;
int var_7 = 675091969;
unsigned long long int var_8 = 6153917168347642651ULL;
int zero = 0;
unsigned long long int var_11 = 4481242604341264930ULL;
short var_12 = (short)-24950;
unsigned short var_13 = (unsigned short)14870;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
