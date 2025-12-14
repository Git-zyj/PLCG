#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10840539665815107040ULL;
unsigned long long int var_3 = 8943019353783384138ULL;
signed char var_4 = (signed char)-75;
long long int var_7 = -8131462247861313451LL;
unsigned long long int var_9 = 15424122348192763618ULL;
unsigned short var_13 = (unsigned short)58526;
signed char var_15 = (signed char)-122;
unsigned short var_17 = (unsigned short)60541;
int zero = 0;
int var_20 = 1408713487;
short var_21 = (short)8377;
unsigned long long int var_22 = 9538347026870277942ULL;
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
