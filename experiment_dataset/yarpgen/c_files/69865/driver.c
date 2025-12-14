#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6080820708635108384LL;
long long int var_2 = 5523205422936571369LL;
unsigned long long int var_6 = 18110271531640126161ULL;
unsigned long long int var_7 = 8288119989897001038ULL;
int var_10 = 1902030587;
int zero = 0;
short var_11 = (short)-23573;
unsigned short var_12 = (unsigned short)14725;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
