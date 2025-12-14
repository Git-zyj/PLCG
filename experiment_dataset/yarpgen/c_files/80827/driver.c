#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2588437119U;
signed char var_11 = (signed char)-71;
int zero = 0;
unsigned int var_19 = 1705861745U;
int var_20 = -1118832798;
long long int var_21 = -4665009424240816003LL;
short var_22 = (short)-21344;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
