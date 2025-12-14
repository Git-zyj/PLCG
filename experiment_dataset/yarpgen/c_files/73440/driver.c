#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19037;
unsigned long long int var_1 = 1540139330151489189ULL;
int var_2 = -1644523139;
signed char var_4 = (signed char)-106;
unsigned long long int var_6 = 18159840937344958260ULL;
unsigned long long int var_9 = 5729657820219824793ULL;
int zero = 0;
int var_13 = -1593943018;
int var_14 = 711409930;
signed char var_15 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
