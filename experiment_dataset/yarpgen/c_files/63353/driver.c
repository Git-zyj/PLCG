#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)202;
int var_7 = -1720764455;
short var_9 = (short)27792;
unsigned long long int var_12 = 15341711627955623051ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)207;
int var_18 = 913685889;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
