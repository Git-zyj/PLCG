#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4164949421251518958LL;
long long int var_9 = -8680750890477665763LL;
long long int var_11 = -8418121639264937296LL;
unsigned short var_14 = (unsigned short)41468;
long long int var_15 = -4795918607630657406LL;
unsigned long long int var_19 = 1341196532835035466ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)42587;
long long int var_21 = -7625854038245652514LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
