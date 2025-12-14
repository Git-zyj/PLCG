#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3575684313277533883LL;
unsigned int var_3 = 3534628755U;
unsigned char var_4 = (unsigned char)187;
unsigned long long int var_5 = 6305845878559525442ULL;
signed char var_10 = (signed char)81;
int zero = 0;
unsigned char var_11 = (unsigned char)56;
unsigned long long int var_12 = 9163995812661251930ULL;
long long int var_13 = 2021271324863397954LL;
long long int var_14 = -7288097894969526693LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
