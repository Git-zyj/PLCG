#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10924505388661982896ULL;
signed char var_2 = (signed char)107;
unsigned char var_4 = (unsigned char)145;
signed char var_8 = (signed char)43;
unsigned long long int var_11 = 9855996912803981723ULL;
unsigned long long int var_15 = 10831353945262444799ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)146;
int var_21 = -1574225024;
void init() {
}

void checksum() {
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
