#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17038680965142342167ULL;
long long int var_2 = 7810958095326137014LL;
int var_5 = 31997172;
unsigned int var_13 = 1682877358U;
unsigned int var_14 = 1442723519U;
unsigned int var_15 = 1432321766U;
long long int var_16 = -3924126770733851575LL;
int zero = 0;
unsigned int var_19 = 2470266155U;
unsigned long long int var_20 = 13702493303795831825ULL;
unsigned int var_21 = 2655583026U;
unsigned int var_22 = 3878058040U;
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
