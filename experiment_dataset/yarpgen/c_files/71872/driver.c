#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4232821133235298965LL;
unsigned short var_3 = (unsigned short)32082;
signed char var_11 = (signed char)39;
int var_12 = -1826704320;
unsigned int var_16 = 372145406U;
unsigned short var_17 = (unsigned short)44627;
int zero = 0;
long long int var_18 = -6875840322508061429LL;
int var_19 = 1496564790;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
