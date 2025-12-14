#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23897;
int var_8 = -112574787;
long long int var_9 = -5986110827722183936LL;
unsigned long long int var_10 = 12164193874058890748ULL;
unsigned long long int var_13 = 15066164356287235090ULL;
int zero = 0;
signed char var_16 = (signed char)-76;
unsigned long long int var_17 = 2070047716789903309ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
