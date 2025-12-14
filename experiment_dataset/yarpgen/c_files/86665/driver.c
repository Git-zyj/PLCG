#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15787;
signed char var_6 = (signed char)38;
unsigned long long int var_9 = 7398729851257917161ULL;
_Bool var_10 = (_Bool)1;
int var_11 = -1930321666;
int zero = 0;
unsigned long long int var_13 = 16674807851948789500ULL;
unsigned short var_14 = (unsigned short)55724;
signed char var_15 = (signed char)55;
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
