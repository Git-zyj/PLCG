#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1505878005;
signed char var_1 = (signed char)-80;
int var_10 = 1436969720;
int zero = 0;
int var_13 = -236031985;
unsigned short var_14 = (unsigned short)30674;
int var_15 = 1955896939;
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
