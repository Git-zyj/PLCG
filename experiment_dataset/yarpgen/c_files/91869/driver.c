#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4950616280568855911LL;
short var_11 = (short)18712;
int var_12 = 1026041777;
long long int var_18 = -5507430543326374839LL;
int zero = 0;
unsigned char var_19 = (unsigned char)9;
long long int var_20 = 8930658743832816187LL;
long long int var_21 = -3510626031698096163LL;
void init() {
}

void checksum() {
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
