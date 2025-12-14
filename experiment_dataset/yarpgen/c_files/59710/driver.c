#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1463078783U;
long long int var_9 = -2388260926365292700LL;
long long int var_11 = 6009502594574629336LL;
unsigned short var_13 = (unsigned short)45190;
int zero = 0;
unsigned short var_17 = (unsigned short)5950;
unsigned int var_18 = 2233562407U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
