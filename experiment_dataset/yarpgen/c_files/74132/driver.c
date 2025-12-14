#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19219;
short var_1 = (short)21785;
unsigned short var_4 = (unsigned short)3621;
long long int var_8 = -7450422832688062833LL;
long long int var_9 = -870045497082011436LL;
unsigned long long int var_10 = 11185640417586836947ULL;
int zero = 0;
unsigned int var_13 = 2019736633U;
unsigned short var_14 = (unsigned short)47403;
unsigned int var_15 = 623655372U;
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
