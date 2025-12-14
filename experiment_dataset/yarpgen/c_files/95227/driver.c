#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
unsigned short var_3 = (unsigned short)21572;
signed char var_8 = (signed char)30;
unsigned long long int var_9 = 16355303676797399853ULL;
int zero = 0;
signed char var_10 = (signed char)48;
long long int var_11 = 1553808514095777854LL;
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
