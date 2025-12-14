#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2074997945;
short var_6 = (short)-720;
unsigned short var_13 = (unsigned short)32485;
int zero = 0;
signed char var_18 = (signed char)-20;
int var_19 = -527612942;
short var_20 = (short)29253;
int var_21 = 2030818593;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
