#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1800468280908252144LL;
unsigned int var_3 = 3139613690U;
unsigned char var_4 = (unsigned char)17;
unsigned long long int var_7 = 4038681454989614048ULL;
short var_8 = (short)-16776;
unsigned char var_11 = (unsigned char)206;
int zero = 0;
int var_14 = -1045809888;
long long int var_15 = -7425174984121602534LL;
unsigned long long int var_16 = 3423622832174869206ULL;
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
