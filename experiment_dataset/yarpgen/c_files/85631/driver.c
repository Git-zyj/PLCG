#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3200705830048627300LL;
unsigned short var_2 = (unsigned short)18751;
unsigned short var_5 = (unsigned short)30330;
long long int var_13 = -6790937803644495402LL;
int zero = 0;
unsigned char var_18 = (unsigned char)8;
short var_19 = (short)18901;
unsigned short var_20 = (unsigned short)63701;
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
