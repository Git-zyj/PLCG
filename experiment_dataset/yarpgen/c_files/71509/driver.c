#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3057412402277893156LL;
long long int var_11 = 1128103981008934612LL;
unsigned long long int var_12 = 3771484004389817852ULL;
int var_13 = 1816605036;
int zero = 0;
signed char var_18 = (signed char)-86;
unsigned char var_19 = (unsigned char)51;
long long int var_20 = -5784347485450103543LL;
long long int var_21 = -7367927987959069934LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
