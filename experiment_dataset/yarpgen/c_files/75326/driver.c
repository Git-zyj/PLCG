#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -513363045;
unsigned long long int var_5 = 11074358131198401655ULL;
unsigned int var_7 = 766739458U;
unsigned int var_9 = 2350454358U;
unsigned short var_10 = (unsigned short)500;
int zero = 0;
long long int var_11 = 5651282265969531520LL;
long long int var_12 = 2179606249210104999LL;
unsigned long long int var_13 = 12756889791016568617ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
