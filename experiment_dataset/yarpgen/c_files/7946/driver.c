#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8846;
unsigned long long int var_3 = 9516948830634964242ULL;
signed char var_12 = (signed char)90;
int zero = 0;
long long int var_13 = -8056480543415112769LL;
int var_14 = -1459054234;
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
