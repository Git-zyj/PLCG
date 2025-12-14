#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16343;
unsigned long long int var_9 = 1403099546154235302ULL;
unsigned long long int var_12 = 8528349619652689084ULL;
int var_14 = 1436778141;
int zero = 0;
unsigned short var_18 = (unsigned short)29353;
unsigned short var_19 = (unsigned short)35094;
long long int var_20 = -5003027801123406856LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
