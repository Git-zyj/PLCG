#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17387;
short var_9 = (short)16138;
unsigned short var_14 = (unsigned short)10631;
short var_15 = (short)29924;
int zero = 0;
unsigned short var_20 = (unsigned short)60301;
signed char var_21 = (signed char)-95;
short var_22 = (short)6369;
void init() {
}

void checksum() {
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
