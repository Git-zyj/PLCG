#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1577546478753548625LL;
long long int var_3 = 2629442885888785150LL;
signed char var_4 = (signed char)27;
unsigned short var_7 = (unsigned short)60708;
unsigned char var_9 = (unsigned char)103;
int zero = 0;
unsigned char var_14 = (unsigned char)130;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
