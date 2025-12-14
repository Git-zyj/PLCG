#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4672110639341796806LL;
long long int var_8 = -1925165881079512030LL;
unsigned short var_9 = (unsigned short)39663;
int var_16 = 493099984;
int zero = 0;
int var_20 = 1790972471;
unsigned long long int var_21 = 15147278327610408955ULL;
int var_22 = -511687100;
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
