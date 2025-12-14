#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
short var_5 = (short)11010;
long long int var_6 = 4550230916820504557LL;
signed char var_9 = (signed char)-9;
signed char var_10 = (signed char)74;
unsigned short var_11 = (unsigned short)58850;
unsigned short var_16 = (unsigned short)32128;
signed char var_18 = (signed char)42;
int zero = 0;
int var_20 = 790023562;
unsigned short var_21 = (unsigned short)24898;
signed char var_22 = (signed char)84;
unsigned long long int var_23 = 2210504176169030738ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
