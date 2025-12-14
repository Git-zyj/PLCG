#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4637858508723306242LL;
short var_9 = (short)-5981;
int var_10 = 1534166817;
int zero = 0;
unsigned char var_14 = (unsigned char)220;
short var_15 = (short)-31496;
long long int var_16 = 2559182319355450564LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
