#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
signed char var_4 = (signed char)-6;
long long int var_7 = 388409456716140352LL;
long long int var_9 = 3517600190006373725LL;
int zero = 0;
unsigned int var_10 = 956862418U;
unsigned char var_11 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
