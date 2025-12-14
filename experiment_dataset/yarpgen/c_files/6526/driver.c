#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6008580458883825418LL;
unsigned char var_3 = (unsigned char)132;
unsigned long long int var_7 = 18061975298076500555ULL;
short var_8 = (short)16407;
long long int var_12 = -915236470624132568LL;
int zero = 0;
long long int var_13 = 7058893518154755618LL;
unsigned long long int var_14 = 11132669814374460811ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
