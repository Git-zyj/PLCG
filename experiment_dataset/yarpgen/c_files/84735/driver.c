#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)20029;
unsigned long long int var_10 = 3158652926004064578ULL;
unsigned short var_12 = (unsigned short)64724;
signed char var_17 = (signed char)-54;
int zero = 0;
unsigned short var_18 = (unsigned short)38389;
unsigned long long int var_19 = 2213655547051901551ULL;
unsigned short var_20 = (unsigned short)6438;
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
