#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 968985776U;
long long int var_6 = 7518939907183747607LL;
unsigned long long int var_13 = 15985650635493775791ULL;
unsigned int var_15 = 2077122395U;
int zero = 0;
unsigned long long int var_17 = 13736251385826831543ULL;
unsigned long long int var_18 = 18164876611503093881ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
