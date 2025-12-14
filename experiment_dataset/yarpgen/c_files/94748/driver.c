#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)72;
unsigned long long int var_5 = 18034156651462120820ULL;
long long int var_9 = 476462800845528515LL;
unsigned short var_12 = (unsigned short)44272;
int zero = 0;
unsigned char var_17 = (unsigned char)44;
unsigned short var_18 = (unsigned short)25533;
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
