#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30992;
unsigned long long int var_7 = 15423590075361887790ULL;
long long int var_9 = 6349564731016236078LL;
int zero = 0;
short var_18 = (short)-31415;
unsigned short var_19 = (unsigned short)8631;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
